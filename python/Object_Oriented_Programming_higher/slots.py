# -*- coding: utf-8 -*-

# slot 就是限制给实例绑定属性，只能绑定slot 限定的属性

class Student(object):
    __slots__ = ('name', 'age') # 用tuple定义允许绑定的属性名称

s = Student() # 创建新的实例
s.name = 'Michael' # 绑定属性'name'
s.age = 25 # 绑定属性'age'
s.score = 99 # 绑定属性'score' # 不能被绑定
print(s.name ,s.age)

