# # #bool
# age = 12
# if age >= 18:
#     print('adult')
# else:
#     print('teenager')

# if 1 == True:
#     print('这是真的')
# else:
#     print('这是假的')




# #空值
# test_value = None
# print(test_value)




# #变量
# test_value = 123
# print(test_value)
# test_value = 'hello world \r\n'
# print(test_value)




# #转义符
# print('\\\n\\')




# #常量
# PI = 3.1415926
# print(PI)




# #数学
# print(3 * 2)
# print(10 / 3)
# print(9 / 3)
# print(5 // 3)
# print(5 % 3)




# #字符串
# print('包含中文的str')
# print(ord('A'))    #ord 是获得单个字符的编码
# print(ord('中')) 
# print(chr(66))
# print(chr(20027))

# x = b'ABC'
# y = 'ABC'
# print(b'ABC','ABC')

# print('Hello, %s' % 'world')
# print('Hi, %s, you have $%d.' % ('Michael', 1000000))
# print('growth rate: %d %%' % 7)

# r = 2.5
# s = 3.14 * r ** 2
# print(f'The area of a circle with radius {r} is {s:.2f}')    # f 也是格式化字符串的一种方式

# g1 = 72 
# g2 = 85
# up = (85 - 72) / 100
# print('The up rate of XiaoMing is %.2f' % (up))

# #sound test 
# import numpy as np
# import scipy.io.wavfile as wavfile

# # 设置声音信号的参数
# duration = 3  # 声音时长（秒）
# sampling_rate = 44100  # 采样率（每秒采样点数）
# frequency = 200  # 声音频率（赫兹）
# amplitude = 0.5  # 振幅

# # 生成时间轴
# t = np.linspace(0, duration, int(sampling_rate * duration))

# # 生成声音信号
# sound_signal = amplitude * np.sin(2 * np.pi * frequency * t)

# # 将信号范围映射到16位整数范围（-32768 到 32767）
# sound_signal = (sound_signal * 32767).astype(np.int16)

# # 保存声音信号为WAV文件
# wavfile.write("sound_signal.wav", sampling_rate, sound_signal)





# ## list
# classmates = ['Michael', 'Bob', 'Tracy']
# print(classmates)
# print(len(classmates))  #list 长度
# print(classmates[2])    #访问成员
# print(classmates[-1])   
# # print(classmates[3])    #越界

# classmates.append('Amanda')     #添加成员
# print(classmates)

# classmates.insert(1,'jack')    #插入一个成员
# print(classmates)

# print(classmates.pop())     #对列，先入后出
# print(classmates)

# print(classmates.pop(0))   #删除对应位置的元素
# print(classmates)

# L = ['Apple', 123, True]    #元素类型可以不同
# print(L)

# s = ['python', 'java', ['asp', 'php'], 'scheme']
# print(s)
# print(s[2])    #s 队列的index 2 元素是整个list : ['asp', 'php']
# print(s[2][0])

# #tuple 元组 它的元素不能被修改
# classmates = ('Michael', 'Bob', 'Tracy')
# print(classmates)





# #条件判断
# age = 3
# if age >= 18:
#     print('your age is', age)
#     print('adult')
# else:
#     print('your age is', age)
#     print('teenager')

# birth = int(input('birth:'))
# if birth >= 2000 :
#     print('00后')
# else:
#     print('00前')





#循环
# names = ['Michael', 'Bob', 'Tracy']
# for name in names:
#     print(name)

# sum = 0
# for x in range(101):
#     sum += x
# print(sum)

# sum = 0
# n = 99
# while n > 0:
#     sum += n
#     n -= 2
# print(sum)

# #break 跳出循环
# n = 10
# while n > 0 :
#     print(n)
#     n = n-1
#     if n == 5:
#         break
# print('end')

#continue
# n = 0
# while n < 10:
#     n = n + 1
#     if n % 2 == 0:
#         continue
#     print(n)
# print('end')






# #dict 字典 （其实就是就是链表吧）
# d = {'Michael': 95, 'Bob': 75, 'Tracy': 85,'Tracy':29}
# print(d['Michael'])
# d['Michael'] = 40
# print(d['Michael'])
# print(d.get('Thomas', -1))    #找不到对应的value的时候返回 -1
# d.pop('Bob')
# print(d)



# #set 
# s = set([1, 2, 3])
# print(s)
# s.add(4)
# print(s)
# s.add(4)    #重复添加也不会重复
# print(s)
# s.remove(4)
# print(s)

# #set可以看成数学意义上的无序和无重复元素的集合
# s1 = set([1, 2, 3])
# s2 = set([2, 3, 4])
# print(s1 & s2)






















