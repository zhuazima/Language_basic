class Student(object):
    def __init__(self, name, score):
        self.__name = name     # 加上了__之后变量的属性变成了private
        self.__score = score    # 加上了__之后变量的属性变成了private

    def get_grade(self):
        if self.__score >= 90:
            return 'A'
        elif self.__score >= 60:
            return 'B'
        else:
            return 'C'
        

lisa = Student('Lisa', 99)
bart = Student('Bart', 59)
print(lisa.name, lisa.get_grade())    #保护之后没办法从外面访问了，可以在类里面定义方法
print(bart.name, bart.get_grade())
