import pylink

from tqdm import tqdm
import os
import time
import tkinter as tk
from tkinter import *
from tkinter import ttk
from tkinter import messagebox
from tkinter import filedialog

# import logging
# logging.basicConfig(level=logging.DEBUG)


hex_file_path = "D:/svn/Peacock/TCSDK/tools/BusTransceiver_V1.0.0.1/BootloaderV2/bootloader_V2.1.0.0.hex"
chip_name = 'Cortex-M0'

# 烧录
def flash_hex_file(jlink,file_path):
    try:
        jlink.flash_file(file_path,0x00000000) # 烧录 .hex 文件
    except pylink.errors.JLinkException as e:
        print("JLinkException:", e)
    except Exception as ex:
        print("Exception:", ex)

    # # 模拟烧录进度
    # with tqdm(total=48, desc="Flash Programming", unit="a", unit_scale=True) as pbar:
    #     # 模拟烧录过程，每次写入 10 个字节
    #     for i in range(48 // 4):
    #         time.sleep(0.1)  # 模拟写入的时间
    #         pbar.update(4)  # 更新进度条


# 读取内存
def read_memory(jlink,memory_address,date_len):
    data_list = jlink.memory_read32(memory_address, date_len)

    if len(data_list) > 0:
        for i in range(len(data_list)):
            hex_data = hex(data_list[i])
            print(hex_data)
    else:
        print("No data returned")    

# 断开连接
def disconnect_jlink(jlink):
    jlink.close()  



if __name__ == "__main__":
    try:
        jlink = pylink.JLink()
        jlink.open()  # 连接 J-Link 调试器 ，不需要 S/N 号也可以正常连接 jlink.open("69511641")
        jlink.set_tif(pylink.enums.JLinkInterfaces.SWD)    # sw方式连接
        jlink.set_speed(1000)  # 设置速度为 1000 kHz
        jlink.connect(chip_name)

    except pylink.errors.JLinkException as e:
        print("JLinkException:", e)
    except Exception as ex:
        print("Exception:", ex)


    # 读取芯片信息
    print('ARM Id: %d' % jlink.core_id())
    print('CPU Id: %d' % jlink.core_cpu())
    print('Core Name: %s' % jlink.core_name())
    print('Device Family: %d' % jlink.device_family())

    #读取flash
    read_memory(jlink,0x00000000,1)   # read nvm
    # read_memory(jlink,0x00800694,1) # vbat trim value , 读去 nvr 代码擦掉再去读，不然有锁读不了
    # read_memory(jlink,0x00800858,1) # x corner
    # read_memory(jlink,0x0080085C,1) # y corner

    # erase
    # print(jlink.memory_write32(0x00FF00f8,[0x76543210]))
    # print(jlink.memory_write32(0x00000040,[0x12345678,0x55467913]))
    # jlink.halt()
    # # jlink.unlock()
    # print(jlink.erase())

    # addr = 0x00000000
    # region_size = 0xffff
    # data = [1] * region_size
    # jlink.flash_write(addr, data, 16)

    #烧录
    # flash_hex_file(jlink,hex_file_path)

    # 断开连接
    disconnect_jlink(jlink)