# -*- coding: utf-8 -*-

import re
print(re.match(r'^\d{3}\-\d{3,8}$', '010-12347895'))
print(re.match(r'^\d{3}\-\d{3,8}$', '010 12345'))



def is_valid_email(email):
    pattern = r'^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$'
    return re.match(pattern, email) is not None

# 测试:
assert is_valid_email('someone@gmail.com')
assert is_valid_email('bill.gates@microsoft.com')
assert not is_valid_email('bob#example.com')
assert is_valid_email('mr-bob@example.com')
print('ok')

