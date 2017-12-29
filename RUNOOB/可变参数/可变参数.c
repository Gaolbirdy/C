#include <stdio.h>
#include <stdarg.h>

//int func(int a, ...)
//{
//
//}
//
//void main()
//{
//	func(2, 2, 3);
//	func(2);
//	func(3, 2, 3, 4);
//
//	system("pause");
//}

double average(int num, ...)
{
	va_list valist;
	double sum = 0.0;
	int i;

	// Ϊnum��������ʼ��valist
	va_start(valist, num);

	// �������и���valist�Ĳ���
	for (i = 0; i < num; i++)
	{
		sum += va_arg(valist, int);
	}

	// ����Ϊvalist�������ڴ�
	va_end(valist);

	return sum / num;
}

void main()
{
	printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2, 3, 4, 5));
	printf("Average of 5, 10, 15 = %f\n", average(3, 5, 10, 15));

	system("pause");
}