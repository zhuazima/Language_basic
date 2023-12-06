

#include "stdio.h"
#include "math.h"
#include "time.h"
#include "stdlib.h"

void S_QueueEmpty(unsigned char **Head, unsigned char **Tail, unsigned char *HBuff);
void S_QueueDataIn(unsigned char **Head, unsigned char **Tail, unsigned char *HBuff, unsigned short Len, unsigned char *HData, unsigned short DataLen);
unsigned char S_QueueDataOut(unsigned char **Head, unsigned char **Tail, unsigned char *HBuff, unsigned short Len, unsigned char *Data);
unsigned short S_QueueDataLen(unsigned char **Head, unsigned char **Tail, unsigned short Len);

 
#define QueueEmpty(x)	   S_QueueEmpty((unsigned char**)&(x).Head,(unsigned char**)&(x).Tail,(unsigned char*)(x).Buff) 
#define QueueDataIn(x,y,z) S_QueueDataIn((unsigned char**)&(x).Head,(unsigned char**)&(x).Tail,(unsigned char*)(x).Buff,sizeof((x).Buff),(y),(z))
#define QueueDataOut(x,y)  S_QueueDataOut((unsigned char**)&(x).Head,(unsigned char**)&(x).Tail,(unsigned char*)(x).Buff,sizeof((x).Buff),(y)) 
#define QueueDataLen(x)	   S_QueueDataLen((unsigned char**)&(x).Head,(unsigned char**)&(x).Tail,sizeof((x).Buff))  


/* 队列结构体定义,定义不同大小的队列 */
typedef struct
{
	unsigned char *Head; 
	unsigned char *Tail; 
	unsigned char Buff[4+1];
}Queue4;
typedef struct{unsigned char *Head; unsigned char *Tail; unsigned char Buff[8+1];}    Queue8;
typedef struct{unsigned char *Head; unsigned char *Tail; unsigned char Buff[16+1];}   Queue16; 
typedef struct{unsigned char *Head; unsigned char *Tail; unsigned char Buff[32+1];}   Queue32;
typedef struct{unsigned char *Head; unsigned char *Tail; unsigned char Buff[64+1];}   Queue64;
typedef struct{unsigned char *Head; unsigned char *Tail; unsigned char Buff[90+1];}   Queue90;
typedef struct{unsigned char *Head; unsigned char *Tail; unsigned char Buff[120+1];}  Queue120;
typedef struct{unsigned char *Head; unsigned char *Tail; unsigned char Buff[340+1];}  Queue340;
typedef struct{unsigned char *Head; unsigned char *Tail; unsigned char Buff[745+1];}  Queue745;
typedef struct{unsigned char *Head; unsigned char *Tail; unsigned char Buff[128+1];}  Queue128;
typedef struct{unsigned char *Head; unsigned char *Tail; unsigned char Buff[248+1];}  Queue248;
typedef struct{unsigned char *Head; unsigned char *Tail; unsigned char Buff[256+1];}  Queue256;
typedef struct{unsigned char *Head; unsigned char *Tail; unsigned char Buff[512+1];}  Queue512;
typedef struct{unsigned char *Head; unsigned char *Tail; unsigned char Buff[1024+1];} Queue1K;
typedef struct{unsigned char *Head; unsigned char *Tail; unsigned char Buff[2048+1];} Queue2K;
typedef struct{unsigned char *Head; unsigned char *Tail; unsigned char Buff[5120+1];} Queue5K;
typedef struct{unsigned char *Head; unsigned char *Tail; unsigned char Buff[10240+1];} Queue10K;


/********************************************************************************************************
*  @函数名   S_QueueEmpty						                                                           
*  @描述     清空一个队列								                                     
*  @参数     Head-队列头地址,  Tail-队列尾地址,   HBuff-队列缓存
*  @返回值   无   
*  @注意    无
********************************************************************************************************/
void S_QueueEmpty(unsigned char **Head, unsigned char **Tail, unsigned char *HBuff)
{
		*Head = HBuff;
		*Tail = HBuff;
}

/********************************************************************************************************
*  @函数名   S_QueueDataIn						                                                           
*  @描述     输入一个字节数据进队列								                                     
*  @参数     Head-队列头地址,  Tail-队列尾地址,   HBuff-队列缓存
*  @返回值   无   
*  @注意     无
********************************************************************************************************/
void S_QueueDataIn(unsigned char **Head, unsigned char **Tail, unsigned char *HBuff, unsigned short Len, unsigned char *HData, unsigned short DataLen)
{	
	unsigned short num;
	unsigned char IptStatus;
	
	// if(CPUInterrupptCtrlCBS != 0)
	// {
	// 	CPUInterrupptCtrlCBS(CPU_ENTER_CRITICAL,&IptStatus);
	// }
	for(num = 0; num < DataLen; num++, HData++)
	{
			**Tail = *HData;
			(*Tail)++;
			if(*Tail == HBuff+Len)
				*Tail = HBuff;
			if(*Tail == *Head)
			{
					if(++(*Head) == HBuff+Len)
						*Head = HBuff;		
			}
	}	
	// if(CPUInterrupptCtrlCBS != 0)
	// {
	// 	CPUInterrupptCtrlCBS(CPU_EXIT_CRITICAL,&IptStatus);
	// }
}

/********************************************************************************************************
*  @函数名   S_QueueDataOut						                                                           
*  @描述     从队列里取出一个数据								                                     
*  @参数     Head-队列头地址,  Tail-队列尾地址,   HBuff-队列缓存
*  @返回值   取出的数据   
*  @注意     无
********************************************************************************************************/
unsigned char S_QueueDataOut(unsigned char **Head, unsigned char **Tail, unsigned char *HBuff, unsigned short Len, unsigned char *Data)
{					   
	unsigned char back = 0;
	unsigned char IptStatus;
	// if(CPUInterrupptCtrlCBS != 0)
	// {
	// 	CPUInterrupptCtrlCBS(CPU_ENTER_CRITICAL,&IptStatus);
	// }
	*Data = 0;
	if(*Tail != *Head)
	{
			*Data = **Head;
			back = 1; 				
			if(++(*Head) == HBuff+Len)
				*Head = HBuff;
	}
	// if(CPUInterrupptCtrlCBS != 0)
	// {
	// 	CPUInterrupptCtrlCBS(CPU_EXIT_CRITICAL,&IptStatus);
	// }
	return back;	
}

/********************************************************************************************************
*  @函数名   S_QueueDataLen						                                                           
*  @描述     判断队列里数据的长度							                                     
*  @参数     Head-队列头地址,  Tail-队列尾地址,   HBuff-队列缓存
*  @返回值   队列里有数据个数
*  @注意     无
********************************************************************************************************/
unsigned short S_QueueDataLen(unsigned char **Head, unsigned char **Tail, unsigned short Len)
{
		if(*Tail > *Head)
			return *Tail-*Head;
		if(*Tail < *Head)
			return *Tail+Len-*Head;
		return 0;
}


//延时函数使得程序等待x毫秒
int sleep(unsigned long x)
{
	clock_t start = clock();//定义开始时间,并记录
	clock_t end;//定义结束时间
	do
	{
	if ((end = clock()) == (clock_t)-1)
	{
	printf("error!");
	return 0;
	}
	} while (1000 * (end - start) / CLOCKS_PER_SEC < x);//CLOCKS_PER_SEC这个量的具体值是与操作系统相关的，通常为1000。

	return 1;
}

int main()
{
	Queue16 A_queue;
	QueueEmpty(A_queue);

	unsigned char list_l[10] = {0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A};
	unsigned char data_temp;

    if(!QueueDataLen(A_queue))
	{
		QueueDataIn(A_queue,&list_l[0],10);
	}


	while(QueueDataLen(A_queue))
	{
        QueueDataOut(A_queue,&data_temp);
		printf("data = 0x%x ",data_temp);
		sleep(1000);

	}



	system("pause");
	return 0;
}






