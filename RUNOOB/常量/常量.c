#include <stdio.h>

//#define LENGTH 10
//#define WIDTH 5
//#define NEWLINE '\n'

//void main()
//{
//	printf("%d \n", 212);
//	printf("%d \n", 215);
//	printf("%d \n", 0xfeeL);
//
//	printf("%d \n", 85);	// 十进制
//	printf("%d \n", 0213);	// 八进制
//	printf("%d \n", 0x4b);	// 十六进制
//	printf("%d \n", 30);	// 整数
//	printf("%d \n", 30u);	// 无符号整数
//	printf("%d \n", 30l);	// 长整数
//	printf("%d \n", 30ul);	// 无符号长整数
//
//	printf("%f \n", 3.14159);
//	printf("%f \n", 3.14159E-5L);
//
//	printf("x");
//	printf("\t");
//	printf("\u02C0\n");
//
//	printf("Hello\tWorld\n\n");
//
//	printf("hello, dear\n");
//	printf("hello, \
//dear\n");
//	printf("hello, ");
//	printf("d");
//	printf("ear\n");
//
//	system("pause");
//}

//void main()
//{
//	int area;
//	
//	area = LENGTH * WIDTH;
//	printf("value of area : %d", area);
//	printf("%c", NEWLINE);
//	
//	system("pause");
//}

void main()
{
	const int LENGTH = 10;
	const int WIDTH = 5;
	const char NEWLINE = '\n';
	int area;

	area = LENGTH * WIDTH;
	printf("value of area : %d", area);
	printf("%c", NEWLINE);

	system("pause");

}