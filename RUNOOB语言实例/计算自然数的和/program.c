#include <stdio.h>

//void main()
//{
//	int n, i = 0, sum = 0;
//
//	printf("����һ����������");
//	scanf("%d", &n);
//
//	for (; i <= n; i++)
//	{
//		sum += i;
//	}
//
//	printf("Sum = %d", sum);
//
//	system("pause");
//}

//void main()
//{
//	int n, i = 0, sum = 0;
//
//	printf("����һ����������");
//	scanf("%d", &n);
//
//	while (i <= n)
//	{
//		sum += i;
//		i++;
//	}
//
//	printf("Sum = %d", sum);
//
//	system("pause");
//}

int addNumbers(int n);

void main()
{
	int num;

	printf("����һ����������");
	scanf("%d", &num);

	printf("Sum = %d", addNumbers(num));

	system("pause");
}

int addNumbers(int n)
{
	if (n != 0)
		return n + addNumbers(n - 1);
	else
		return n;
}