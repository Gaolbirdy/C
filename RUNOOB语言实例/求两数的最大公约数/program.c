#include <stdio.h>

//void main()
//{
//	int n1, n2, i, gcd;
//
//	printf("�����������������Կո�ָ���");
//	scanf("%d %d", &n1, &n2);
//
//	for (i = 1; i <= n1 && i <= n2; i++)
//	{
//		if (n1 % i == 0 && n2 % i == 0)
//		{
//			gcd = i;
//			printf("��Լ����%d\n", i);
//		}
//	}
//	
//	printf("%d �� %d �����Լ���� %d", n1, n2, gcd);
//
//	system("pause");
//}

//void main()
//{
//	int n1, n2;
//
//	printf("�������������Կո�ָ���");
//	scanf("%d %d", &n1, &n2);
//
//	n1 = (n1 > 0) ? n1 : -n1;
//	n2 = (n2 > 0) ? n2 : -n2;
//
//	while (n1 != n2)
//	{
//		if (n1 > n2)
//			n1 -= n2;
//		else
//			n2 -= n1;
//		printf("n1 = %d n2 = %d\n", n1, n2);
//	}
//	printf("GCD = %d", n1);
//	
//	system("pause");
//}

int hcf(int n1, int n2);

void main()
{
	int n1, n2;
	printf("Enter two positive integers: ");
	scanf("%d %d", &n1, &n2);

	printf("%d �� %d �����Լ��Ϊ %d", n1, n2, hcf(n1, n2));

	system("pause");
}

int hcf(int n1, int n2)
{
	if (n2 != 0)
		return hcf(n2, n1 % n2);
	else
		return n1;
}