#include <stdio.h>

//void main()
//{
//	int n1, n2, minMultiple;
//	printf("����������������");
//	scanf("%d %d", &n1, &n2);
//
//	minMultiple = (n1 > n2) ? n1 : n2;
//
//	while (1)
//	{
//		if (minMultiple % n1 == 0 && minMultiple % n2 == 0)
//		{
//			printf("%d ��%d ����С������Ϊ %d", n1, n2, minMultiple);
//			break;
//		}
//		minMultiple++;
//	}
//
//	system("pause");
//}

void main()
{
	int n1, n2, i, gcd, lcm;

	printf("����������������");
	scanf("%d %d", &n1, &n2);

	for (i = 1; i <= n1 && i <= n2; i++)
	{
		if (n1 % i == 0 && n2 % i == 0)
			gcd = i;
	}

	lcm = (n1 * n2) / gcd;
	printf("%d �� %d ����С������Ϊ %d", n1, n2, lcm);

	system("pause");
}