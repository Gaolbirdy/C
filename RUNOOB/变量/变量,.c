#include <stdio.h>

//extern int d = 3, f = 5;
//
//void main()
//{
//	/*int i, j, k;
//	char c, ch;
//	float f, salary;
//	double d;*/
//	
//	//int d = 3, f = 5;
//	//byte z = 22;
//	char x = 'x';
//
//	system("pause");
//
//	extern int i;	// 声明，不是定义
//	int i;	// 声明，也是定义
//}

// 变量声明
extern int a, b;
extern int c;
extern float f;

void main()
{
	// 变量定义
	int a, b;
	int c;
	float f;

	// 初始化
	a = 10;
	b = 20;

	c = a + b;
	printf("value of c : %d \n", c);

	f = 70.0 / 3.0;
	printf("value of f : %f \n", f);

	system("pause");

}