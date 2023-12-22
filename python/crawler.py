import requests
from bs4 import BeautifulSoup

# GitHub 仓库 URL
url = 'https://github.com/pschatzmann/ESP32-A2DP'  # 替换为实际的用户名和仓库名称

# 发送 GET 请求
response = requests.get(url)

# 检查是否成功获取数据
if response.status_code == 200:
    print("request success  ")
    # 使用 BeautifulSoup 解析 HTML
    soup = BeautifulSoup(response.text, 'html.parser')
    
    # 找到页面中所有的文本内容
    text_content = soup.get_text()

    # 输出更新信息
    print(text_content)

