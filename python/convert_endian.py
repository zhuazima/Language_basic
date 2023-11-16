def convert_endian(input_bin, output_bin):
    with open(input_bin, 'rb') as bin_file:
        data = bytearray(bin_file.read())

    # Convert endian every 4 bytes
    for i in range(0, len(data), 4):
        data[i:i+4] = data[i:i+4][::-1]

    with open(output_bin, 'wb') as out_file:
        out_file.write(data)

input_bin = 'input.bin'
output_bin = 'output.bin'
convert_endian(input_bin, output_bin)
