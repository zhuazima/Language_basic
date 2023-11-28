# 定义编译器和编译选项
CC = gcc
CFLAGS = -Wall -g

# 定义目标文件和依赖文件
TARGET = main
OBJS = main.o func.o

# 定义编译规则
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: main.c func.h
	$(CC) $(CFLAGS) -c main.c -o main.o

# func.o: func.c func.h
# 	$(CC) $(CFLAGS) -c func.c

func.o: func.c func.h
	$(CC) $(CFLAGS) -c func.c -o func.o

# 定义清理规则
clean:
	rm -f $(TARGET) $(OBJS)