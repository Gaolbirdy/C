#include <stdio.h>

//main()
//{
//	int a = 10;
//
//	if (a < 20)
//	{
//		printf("a 小于 20\n");
//	}
//	printf("a 的值是 %d\n", a);
//
//	system("pause");
//}

//void main()
//{
//	int a = 100;
//
//	if (a < 20)
//	{
//		printf("a 小于 20\n");
//	}
//	else
//	{
//		printf("a 大于等于 20\n");
//	}
//	printf("a 的值是 %d\n", a);
//
//	system("pause");
//}

//void main()
//{
//	int a = 100;
//
//	if (a == 10)
//	{
//		printf("a 的值是 10\n");
//	}
//	else if (a == 20)
//	{
//		printf("a 的值是 20\n");
//	}
//	else if (a == 30)
//	{
//		printf("a 的值是 30\n");
//	}
//	else
//	{
//		printf("没有匹配的值\n");
//	}
//	printf("a 的准确值是 %d\n", a);
//
//	system("pause");
//}

//void main()
//{
//	int a = 100;
//	int b = 200;
//
//	if (a == 100)
//	{
//		if (b == 200)
//		{
//			printf("a 的值是 100， 且 b 的值是 200\n");
//		}
//	}
//
//	printf("a 的准确值是 %d\n", a);
//	printf("b 的准确值是 %d\n", b);
//
//	system("pause");
//}

//void main()
//{
//	char grade = 'B';
//
//	switch (grade)
//	{
//	case 'A':
//		printf("很棒!\n");
//		break;
//	case 'B':
//	case 'C':
//		printf("做得好\n");
//		break;
//	case 'D':
//		printf("您通过了\n");
//		break;
//	case 'F':
//		printf("最好再试一下\n");
//		break;
//	default:
//		printf("无效的成绩\n");
//	}
//	printf("您的成绩是 %c\n", grade);
//
//	system("pause");
//}

//void main()
//{
//	int a = 100;
//	int b = 200;
//
//	switch (a)
//	{
//		case 100:
//			printf("这是外部 switch 的一部分\n");
//			switch (b)
//			{
//				case 200:
//					printf("这是内部 switch 的一部分\n");
//			}
//	}
//	printf("a 的准确值是 %d\n", a);
//	printf("b 的准确值是 %d\n", b);
//
//	system("pause");
//}

void main()
{
	int num;

	printf("输入一个数字：");
	scanf_s("%d", &num);

	(num % 2 == 0) ? printf("偶数") : printf("奇数");

	system("pause");
}