#include<stdio.h>
#include<stdlib.h>

struct Stu
{
	char name[20];
	int age;
	int height;
	char num[10];
};
int main(void)
{
	//struct Stu student = {"jy",18,180,"20190215"};
	struct Stu student;
	//student = (struct Stu){"gdfg",18,180,"20190215"};
	student = (struct Stu){.height = 180};
    student = (struct Stu){.name = "wanger",.age = 10,.height = 180,.num = "test line" };
	struct Stu *p = &student;
	printf("%s,%d,%d,%s", p->name,p->age, p->height, p->num);

	return 0;
}
