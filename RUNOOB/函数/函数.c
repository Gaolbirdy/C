#include <stdio.h>

//int max(int num1, int num2);
//int max(int, int);
//
//void main()
//{
//	int a = 100;
//	int b = 200;
//	int ret;
//
//	ret = max(a, b);
//
//	printf("Max value is : %d\n", ret);
//
//	system("pause");
//}
//
//int max(int num1, int num2)
//{
//	int result;
//
//	if (num1 > num2)
//		result = num1;
//	else
//		result = num2;
//
//	return result;
//}

//void swap(int, int);
//
//void main()
//{
//	int a = 100;
//	int b = 200;
//
//	printf("����ǰ��a ��ֵ�� %d\n", a);
//	printf("����ǰ��b ��ֵ�� %d\n", b);
//
//	swap(a, b);
//
//	printf("������a ��ֵ�� %d\n", a);
//	printf("������b ��ֵ�� %d\n", b);
//
//	system("pause");
//}
//
//void swap(int x, int y)
//{
//	int temp;
//
//	temp = x;
//	x = y;
//	y = temp;
//
//	return;
//}

void swap(int *, int *);

void main()
{
	int a = 100;
	int b = 200;

	printf("����ǰ��a ��ֵ�� %d\n", a);
	printf("����ǰ��b ��ֵ�� %d\n", b);

	swap(&a, &b);

	printf("������a ��ֵ�� %d\n", a);
	printf("������b ��ֵ�� %d\n", b);

	system("pause");
}

void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;

	return;
}
