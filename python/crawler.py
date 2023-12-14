import requests
from bs4 import BeautifulSoup
import os

def download_images(url):
    # 发送 GET 请求
    response = requests.get(url)

    # 检查请求状态
    if response.status_code == 200:
        # 使用 BeautifulSoup 解析页面内容
        soup = BeautifulSoup(response.text, 'html.parser')

        # 找到所有图片标签
        images = soup.find_all('img')

        # 创建保存图片的文件夹
        if not os.path.exists('downloaded_images'):
            os.makedirs('downloaded_images')

        # 下载图片
        for idx, img in enumerate(images):
            img_url = img.get('src')
            img_name = f"image_{idx}.jpg"

            # 下载图片
            img_data = requests.get(img_url).content
            with open(f"downloaded_images/{img_name}", 'wb') as f:
                f.write(img_data)
            
            print(f"Downloaded {img_name}")

    else:
        print("Failed to fetch the page.")

# 要爬取的网页 URL
url_to_crawl = 'https://github.com/'

# 调用函数并传入网址
download_images(url_to_crawl)
