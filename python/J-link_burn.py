import pylink
import ctypes, os, sys

hex_file_path = "D:/svn/Peacock/Release/keil/TCPL01_AUTO_SDK_V1.0.11/tools/BusTransceiver_V1.0.0.1/BootloaderV2/bootloader_v2.0.0.5.hex"  # 替换为你的 .hex 文件路径
chip_name = 'Cortex-M0'

# 烧录
def flash_hex_file(jlink,file_path):
    try:
        jlink.flash_file(file_path,0x00000000) # 烧录 .hex 文件
    except pylink.errors.JLinkException as e:
        print("JLinkException:", e)
    except Exception as ex:
        print("Exception:", ex)


# 读取内存
def read_memory(jlink,memory_address,date_len):
    data_list = jlink.memory_read64(memory_address, date_len)

    if len(data_list) > 0:
        for i in range(len(data_list)):
            hex_data = hex(data_list[i])
            print(hex_data)
            i = i + 1
    else:
        print("No data returned")    

# 断开连接
def disconnect_jlink(jlink):
    jlink.close()  



if __name__ == "__main__":
    try:
        jlink = pylink.JLink()
        jlink.open()  # 连接 J-Link 调试器 ，不需要 S/N 号也可以正常连接 jlink.open("69511641")
        jlink.set_tif(pylink.enums.JLinkInterfaces.SWD)
        jlink.set_speed(1000)  # 设置速度为 1000 kHz
        jlink.connect(chip_name)

    except pylink.errors.JLinkException as e:
        print("JLinkException:", e)
    except Exception as ex:
        print("Exception:", ex)

    #读取
    read_memory(jlink,0x00000040,0x20)

    #烧录
    flash_hex_file(jlink,hex_file_path)

    # 断开连接
    disconnect_jlink(jlink)