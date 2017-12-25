#include <stdio.h>
#include <stdlib.h>

////// 声明一个指向同样参数、返回值的函数指针类型
//typedef int (*func_ptr)(int, int);
//
//int max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//void main()
//{
//	// p是函数指针
//	int (*p)(int, int) = &max;	// &可以省略
//	int a, b, c, d;
//
//	printf("请输入三个数字：");
//	scanf_s("%d %d %d", &a, &b, &c);
//
//	// 与直接调用函数等价， d = max(max(a, b), c)
//	d = p(p(a, b), c);
//	printf("最大的数字是: %d\n", d);
//
//	system("pause");
//}

// 回调函数
void populate_array(int *array, size_t arraySize, int(*getNextValue)(void))
{
	for (size_t i = 0; i < arraySize; i++)
	{
		array[i] = getNextValue();
	}
}

// 获取随机值
int getNextRandomValue(void)
{
	return rand();
}

void main()
{
	int myarray[10];
	populate_array(myarray, 10, getNextRandomValue);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", myarray[i]);
	}
	printf("\n");

	system("pause");
}