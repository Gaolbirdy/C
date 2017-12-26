#include <stdio.h>
#include <string.h>

// 定义简单的结构
struct 
{
	unsigned int widthValidated;
	unsigned int heightValidated;
} status1;

// 定义位域结构
struct
{
	unsigned int widthValidated : 1;
	unsigned int heightValidated : 1;
} status2;

struct
{
	unsigned int widthValidated : 16;
	unsigned int heightValidated : 16;
} status3;


struct
{
	unsigned int widthValidated : 16;
	unsigned int heightValidated : 16;
	unsigned int a : 1;
} status4;

struct BitField
{
	unsigned int age : 3;
} Age;

//void main()
//{
//	printf("Memory size occupied by status1 : %d\n", sizeof(status1));	// 8
//	printf("Memory size occupied by status2 : %d\n", sizeof(status2));	// 4
//	printf("Memory size occupied by status3 : %d\n", sizeof(status3));	// 4
//	printf("Memory size occupied by status4 : %d\n", sizeof(status4));	// 8
//
//	system("pause");
//}

void main()
{
	Age.age = 4;
	printf("Sizeof(Age) : %d\n", sizeof(Age));
	printf("Age.age: %d\n", Age.age);

	Age.age = 7;
	printf("Age.age: %d\n", Age.age);

	Age.age = 8;
	printf("Age.age: %d\n", Age.age);

	system("pause");
}