

# 概念： 函数名字作为参数
def add(x, y, f):
    return f(x) + f(y)

print(add(-5, 6, abs))


#map
#             f(x) = x * x
#                   │
#                   │
#   ┌───┬───┬───┬───┼───┬───┬───┬───┐
#   ▼   ▼   ▼   ▼   ▼   ▼   ▼   ▼   ▼
# [ 1   2   3   4   5   6   7   8   9 ]
#   │   │   │   │   │   │   │   │   │
#   ▼   ▼   ▼   ▼   ▼   ▼   ▼   ▼   ▼
# [ 1   4   9  16  25  36  49  64  81 ]

def f(x):
    return x * x

r = map(f, [1, 2, 3, 4, 5, 6, 7, 8, 9])
print(list(r))

print(list(map(str, [1, 2, 3, 4, 5, 6, 7, 8, 9])))

#reduce
#要把序列[1, 3, 5, 7, 9]变换成整数13579，reduce就可以派上用场：

from functools import reduce

def fn(x, y):
    return x * 10 + y

print(reduce(fn, [1, 3, 5, 7, 9]))




from functools import reduce

DIGITS = {'0': 0, '1': 1, '2': 2, '3': 3, '4': 4, '5': 5, '6': 6, '7': 7, '8': 8, '9': 9}

def str2int(s):
    def fn(x, y):
        return x * 10 + y
    def char2num(s):
        return DIGITS[s]
    return reduce(fn, map(char2num, s))

print(str2int('123456'))


CHAR_TO_FLOAT = {
    '0': 0,
    '1': 1,
    '2': 2,
    '3': 3,
    '4': 4,
    '5': 5,
    '6': 6,
    '7': 7,
    '8': 8,
    '9': 9,
    '.': -1
}

def str2float(s):
    nums = map(lambda ch: CHAR_TO_FLOAT[ch], s)
    point = 0
    def to_float(f, n):
        nonlocal point
        if n == -1:
            point = 1
            return f
        if point == 0:
            return f * 10 + n
        else:
            point = point * 10
            return f + n / point
    return reduce(to_float, nums, 0.0)

print(str2float('0'))
print(str2float('123.456'))
print(str2float('123.45600'))

integer_value = int('741258963')
print(integer_value)