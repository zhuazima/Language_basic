# #调用函数
# print(abs(-125))
# print(max(1,5,10,125))

# #定义函数
# def my_abs(x):
#     if not isinstance(x, (int, float)):
#         raise TypeError('bad operand type')
#     if x >= 0:
#         return x
#     else:
#         return -x

# print(my_abs('q'))

# import math
# def move(x, y, step, angle=0):
#     nx = x + step * math.cos(angle)
#     ny = y + step * math.sin(angle)
#     return nx, ny

# x , y = move(0,0,5,3.1415)
# print(x,y)
# print(move(0,0,5,3.1415))    #返回值的多个值其实是元组

# # 一元二次方程的求根公式
# import math   
# def quadratic(a, b, c):
#     x1 = (-b + math.sqrt(b*b -4*a*c)) / 2 * a
#     x2 = (-b - math.sqrt(b*b -4*a*c)) / 2 * a
#     return x1,x2

# calculate1 ,calculate2 = quadratic(1, -2, 1)
# print(calculate1,calculate2)





##默认参数
# def power(x, n=2): 
#     s = 1
#     while n > 0:
#         n = n - 1
#         s = s * x
#     return s

# print(power(5))
# print(power(5,5))




# #可变参数
# def calc(*numbers):
#     sum = 0
#     for n in numbers:
#         sum = sum + n * n
#     return sum

# nums = [1, 2, 3]

# print(calc(*nums))


# #这里是乱入的
# import random
# # 生成三个1000以内的随机数
# random_numbers = [random.randint(1, 1000) for _ in range(3)]
# # 打印生成的随机数
# for num in random_numbers:
#     if num > 99:
#         print(num)


# #关键字参数
# def person(name, age, **kw):
#     print('name:', name, 'age:', age, 'other:', kw)


# person('Alice', 30, city='New York', job='Engineer')
# person('Bob', 35, city='Beijing')

# 命名关键字参数

