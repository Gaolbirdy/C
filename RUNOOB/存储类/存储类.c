//#include <stdio.h>
//
//static int Count;
//int Road;
//
//void func1(void);
//
//static int count = 10;
//
//void main()
//{
//	int mount;
//	auto int month;
//	auto a = 3;
//
//	register int miles;
//
//	printf("%d\n", Count);
//	printf("%d\n", Road);
//
//	while (count--)
//	{
//		func1();
//	}
//
//	system("pause");
//}
//
//void func1(void)
//{
//	// thingy是func1的局部变量，只初始化一次，每次调用函数func1，thingy值不会被重置
//	static int thingy = 5;
//	thingy++;
//	printf("thingy 为%d,   count 为 %d\n", thingy, count);
//}