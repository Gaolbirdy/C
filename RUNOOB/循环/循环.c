#include <stdio.h>

//void main()
//{
//	int a = 10;
//
//	while (a < 20)
//	{
//		printf("a 的值是：%d\n", a);
//		a++;
//	}
//
//	system("pause");
//}

//void main()
//{
//	for (int i = 10; i < 20; i= i + 1)
//	{
//		printf("i 的值：%d\n", i);
//	}
//
//	system("pause");
//}

//void main()
//{
//	int a = 10;
//
//	do
//	{
//		printf("a 的值：%d\n", a);
//		a++;
//	} while (a <20);
//
//	system("pause");
//}

//void main()
//{
//	int i, j;
//
//	for (int i = 2; i < 100; i++)
//	{
//		for (j = 2; j <= (i / j); j++)
//		{
//			if (!(i % j))
//				break;
//		}
//		if (j > (i / j))
//			printf("%d 是质数\n", i);
//	}
//
//	system("pause");
//}

//void main()
//{
//	int a = 10;
//
//	while (a < 20)
//	{
//		printf("a 的值： %d\n", a);
//		a++;
//		if (a > 15)
//		{
//			break;
//		}
//	}
//
//	system("pause");
//}

//void main()
//{
//	int a = 10;
//
//	do
//	{
//		if (a == 15)
//		{
//			// 跳过迭代
//			a = a + 1;
//			continue;
//		}
//		printf("a 的值： %d\n", a);
//		a++;
//	} while (a < 20);
//
//	system("pause");
//}

//void main()
//{
//	int a = 10;
//	
//	LOOP: do
//	{
//		if (a == 15)
//		{
//			a = a + 1;
//			goto LOOP;
//		}
//		printf("a 的值： %d\n", a);
//		a++;
//	} while (a < 20);
//
//	system("pause");
//}

int main()
{

	for (; ; )
	{
		printf("该循环会永远执行下去！\n");
	}

	return 0;
}