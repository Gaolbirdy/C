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

	// 为num个参数初始化valist
	va_start(valist, num);

	// 访问所有赋给valist的参数
	for (i = 0; i < num; i++)
	{
		printf("%p\n", valist);
		printf("%d\n", *valist);

		sum += va_arg(valist, int);
		printf("%p\n", valist);
		printf("%d\n\n", *valist);

		//printf("%d\n", va_arg(valist, int));
	}

	// 清理为valist保留的内存
	va_end(valist);
	printf("%p\n", valist);
	//printf("%d\n", *valist);

	return sum / num;
}

void main()
{
	printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2, 3, 4, 5));
	printf("Average of 5, 10, 15 = %f\n", average(3, 5, 10, 15));

	system("pause");
}