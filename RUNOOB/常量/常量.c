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
//	printf("%d \n", 85);	// ʮ����
//	printf("%d \n", 0213);	// �˽���
//	printf("%d \n", 0x4b);	// ʮ������
//	printf("%d \n", 30);	// ����
//	printf("%d \n", 30u);	// �޷�������
//	printf("%d \n", 30l);	// ������
//	printf("%d \n", 30ul);	// �޷��ų�����
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