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
//	extern int i;	// ���������Ƕ���
//	int i;	// ������Ҳ�Ƕ���
//}

// ��������
extern int a, b;
extern int c;
extern float f;

void main()
{
	// ��������
	int a, b;
	int c;
	float f;

	// ��ʼ��
	a = 10;
	b = 20;

	c = a + b;
	printf("value of c : %d \n", c);

	f = 70.0 / 3.0;
	printf("value of f : %f \n", f);

	system("pause");

}