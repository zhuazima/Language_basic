import pylink
import ctypes, os, sys

chip_name = 'Cortex-M0'

# def connect_to_device(self, chip_name):
#     try:
#         index = self.get_device_index(chip_name)
#         self.open()
#         self.connect(index)
#         # 执行其他操作，如读取寄存器、烧录程序等
#     except errors.JLinkException as e:
#         print("JLinkException:", e)

def main():
    try:
        jlink = pylink.JLink()
        jlink.open()  # 连接 J-Link 调试器 ，不需要 S/N 号也可以正常连接 jlink.open("69511641")
        jlink.set_tif(pylink.enums.JLinkInterfaces.SWD)
        jlink.set_speed(1000)  # 设置速度为 1000 kHz
        jlink.connect(chip_name)

        data_list = jlink.memory_read64(0x00000040, 0x100)
        for i in range(len(data_list)):
            hex_data = hex(data_list[i])
            print(hex_data)
            i = i + 1

        # if len(data_list) > 0:
        #     hex_data = hex(data_list[0])
        #     print(hex_data)
        # else:
        #     print("No data returned")

        # # 设置速度和目标设备
        # jlink.set_speed(1000)  # 设置速度为 1000 kHz
        # # jlink.connect(chip_name)  # 替换为你的目标设备
        # jlink.connect_to_device('Cortex-M0')

        # # 读取设备 ID
        # device_id = jlink.read_id()
        # print("Device ID:", device_id)

        # # 这里可以执行其他操作，比如烧录程序、读取/写入寄存器等
        # # 烧录
 
        # # 擦除

        jlink.close()  # 断开连接
    except pylink.errors.JLinkException as e:
        print("JLinkException:", e)
    except Exception as ex:
        print("Exception:", ex)

if __name__ == "__main__":
    main()
