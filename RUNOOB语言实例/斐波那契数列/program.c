#include <stdio.h>

//void main()
//{
//	int i, n, t1 = 0, t2 = 1, nextTerm;
//
//	printf("输出几项：");
//	scanf("%d", &n);
//
//	printf("斐波那契数列：");
//
//	for (i = 1; i <= n; i++)
//	{
//		printf("%d, ", t1);
//		nextTerm = t1 + t2;
//		t1 = t2;
//		t2 = nextTerm;
//	}
//
//	system("pause");
//}

void main()
{
	int t1 = 0, t2 = 1, nextTerm = 0, n;

	printf("输入一个正数：");
	scanf("%d", &n);

	printf("斐波那契数列：%d, %d, ", t1, t2);

	nextTerm = t1 + t2;

	while (nextTerm <= n)
	{
		printf("%d, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}

	system("pause");
}