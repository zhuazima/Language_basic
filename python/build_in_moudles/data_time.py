# -*- coding:utf-8 -*-

import re
from datetime import datetime, timezone, timedelta

def to_timestamp(dt_str, tz_str):
    cday = datetime.strptime(dt_str, '%Y-%m-%d %H:%M:%S')
    pattern = r'^UTC(.\d{1,2})():00'
    try:
        time_zone = re.match(pattern,tz_str)
        if(time_zone.group(1)):
             time_zone_value = int(time_zone.group(1))
    except Exception as e:
        print('input error ')

    # cday = cday.replace(tzinfo=timezone.utc)
    cday = cday.astimezone(timezone(timedelta(hours=time_zone_value)))

    print(cday.timestamp())

    return cday.timestamp()

    



# 测试:
t1 = to_timestamp('2015-6-1 08:10:30', 'UTC+7:00')
assert t1 == 1433121030.0, t1

t2 = to_timestamp('2015-5-31 16:10:30', 'UTC-09:00')
assert t2 == 1433121030.0, t2

print('ok')


