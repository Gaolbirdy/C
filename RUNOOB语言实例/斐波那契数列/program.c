#include <stdio.h>

//void main()
//{
//	int i, n, t1 = 0, t2 = 1, nextTerm;
//
//	printf("������");
//	scanf("%d", &n);
//
//	printf("쳲��������У�");
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

	printf("����һ��������");
	scanf("%d", &n);

	printf("쳲��������У�%d, %d, ", t1, t2);

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