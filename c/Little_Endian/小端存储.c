#include <stdio.h>
#include <stdlib.h>

// //a way to test if the system is Little Endian
// int main(void)
// {
// 	int num = 0x01;
//     unsigned char * pch = (unsigned char *)(&num);
    
// 	if(*pch == 0x01)
// 	{
//        printf("little endian \r\n");
// 	}
// 	else
// 	{
//        printf("big endian \r\n");
// 	}

// }

//another way to test if the system is Little Endian
int main()
{
	union test_endian
	{
		int  test_num;
		char test_char;
	};
	
    union test_endian test_u;
	test_u.test_num = 0x01;

	if(test_u.test_char == 0x01)
	{
		printf("little endian \r\n");
	}
	else
	{
        printf("big endian \r\n");
	}

	return 0;
}
