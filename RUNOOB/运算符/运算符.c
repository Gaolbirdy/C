#include <stdio.h>

//void main()
//{
//	int a = 21;
//	int b = 10;
//	int c;
//
//	c = a + b;
//	printf("Line 1 - c ��ֵ�� %d\n", c);
//
//	c = a - b;
//	printf("Line 2 - c ��ֵ�� %d\n", c);
//
//	c = a * b;
//	printf("Line 3 - c ��ֵ�� %d\n", c);
//
//	c = a / b;
//	printf("Line 4 - c ��ֵ�� %d\n", c);
//
//	c = a % b;
//	printf("Line 5 - c ��ֵ�� %d\n", c);
//
//	c = a++;
//	printf("Line 6 - c ��ֵ�� %d\n", c);
//
//	c = a--;
//	printf("Line 7 - c ��ֵ�� %d\n", c);
//
//	system("pause");
//}

//void main()
//{
//	int c;
//	int a = 10;
//
//	c = a++;
//	printf("�ȸ�ֵ������: \n");
//	printf("Line 1 - c ��ֵ�� %d\n", c);
//	printf("Line 2 - a ��ֵ�� %d\n", a);
//
//	a = 10;
//	c = a--;
//	printf("Line 3 - c ��ֵ�� %d\n", c);
//	printf("Line 4 - a ��ֵ�� %d\n", a);
//
//	printf("�������ֵ: \n");
//	a = 10;
//	c = ++a;
//	printf("Line 5 - c ��ֵ�� %d\n", c);
//	printf("Line 6 - a ��ֵ�� %d\n", a);
//
//	a = 10;
//	c = --a;
//	printf("Line 7 - c ��ֵ�� %d\n", c);
//	printf("Line 8 - a ��ֵ�� %d\n", a);
//
//	system("pause");
//}

//void main()
//{
//	int a = 21;
//	int b = 10;
//
//	if (a == b)
//	{
//		printf("Line 1 - a ���� b\n");
//	}
//	else
//	{
//		printf("Line 1 - a ������ b\n");
//	}
//
//	if (a < b)
//	{
//		printf("Line 2 - a С�� b\n");
//	}
//	else
//	{
//		printf("Line 2 - a ��С�� b\n");
//	}
//
//	if (a > b)
//	{
//		printf("Line 3 - a ���� b\n");
//	}
//	else
//	{
//		printf("Line 3 - a ������ b\n");
//	}
//
//	// �ı�a��b��ֵ
//	a = 5;
//	b = 20;
//
//	if (a <= b)
//	{
//		printf("Line 4 - a С�ڻ���� b\n");
//	}
//	if (b >= a)
//	{
//		printf("Line 5 - b ���ڻ���� a\n");
//	}
//
//	system("pause");
//}

//void main()
//{
//	int a = 5;
//	int b = 20;
//	int c;
//
//	if (a && b)
//	{
//		printf("Line 1 - ����Ϊ��\n");
//	}
//
//	if (a || b)
//	{
//		printf("Line 2 - ����Ϊ��\n");
//	}
//
//	a = 0;
//	b = 10;
//
//	if (a && b)
//	{
//		printf("Line 3 - ����Ϊ��\n");
//	}
//	else
//	{
//		printf("Line 3 - ������Ϊ��\n");
//	}
//	if (!(a && b))
//	{
//		printf("Line 4 - ����Ϊ��\n");
//	}
//
//	system("pause");
//}

//void main()
//{
//	unsigned int a = 60;
//	unsigned int b = 13;
//	int c = 0;
//
//	c = a & b;
//	printf("Line 1 - c ��ֵ�� %d\n", c);
//
//	c = a | b;
//	printf("Line 2 - c ��ֵ�� %d\n", c);
//
//	c = a ^ b;
//	printf("Line 3 - c ��ֵ�� %d\n", c);
//
//	c = ~a;
//	printf("Line 4 - c ��ֵ�� %d\n", c);
//
//	c = a << 2;
//	printf("Line 5 - c ��ֵ�� %d\n", c);
//
//	c = a >> 2;
//	printf("Line 6 - c ��ֵ�� %d\n", c);
//
//	system("pause");
//}

//main()
//{
//	int a = 21;
//	int c;
//
//	c = a;
//	printf("Line 1 - = �����ʵ����c ��ֵ = %d\n", c);
//
//	c += a;
//	printf("Line 2 - += �����ʵ����c ��ֵ = %d\n", c);
//
//	c -= a;
//	printf("Line 3 - -= �����ʵ����c ��ֵ = %d\n", c);
//
//	c *= a;
//	printf("Line 4 - *= �����ʵ����c ��ֵ = %d\n", c);
//
//	c /= a;
//	printf("Line 5 - /= �����ʵ����c ��ֵ = %d\n", c);
//
//	c = 200;
//	c %= a;
//	printf("Line 6 - %%= �����ʵ����c ��ֵ = %d\n", c);
//
//	c <<= 2;
//	printf("Line 7 - <<= �����ʵ����c ��ֵ = %d\n", c);
//
//	c >>= 2;
//	printf("Line 8 - >>= �����ʵ����c ��ֵ = %d\n", c);
//
//	c &= 2;
//	printf("Line 9 - &= �����ʵ����c ��ֵ = %d\n", c);
//
//	c ^= 2;
//	printf("Line 10 - ^= �����ʵ����c ��ֵ = %d\n", c);
//
//	c |= 2;
//	printf("Line 11 - |= �����ʵ����c ��ֵ = %d\n", c);
//
//	system("pause");
//
//}

//void main()
//{
//	int a = 4;
//	short b;
//	double c;
//	int *ptr;
//
//	printf("Line 1 - ���� a �Ĵ�С = %lu\n", sizeof(a));
//	printf("Line 2 - ���� b �Ĵ�С = %lu\n", sizeof(b));
//	printf("Line 3 - ���� c �Ĵ�С = %lu\n", sizeof(c));
//
//	ptr = &a;
//	printf("a ��ֵ�� %d\n", a);
//	printf("*ptr ��ֵ�� %d\n", *ptr);
//
//	a = 10;
//	b = (a == 1) ? 20 : 30;
//	printf("b ��ֵ�� %d\n", b);
//
//	b = (a == 10) ? 20 : 30;
//	printf("b ��ֵ�� %d\n", b);
//
//	system("pause");
//}

main()
{
	int a = 20;
	int b = 10;
	int c = 15;
	int d = 5;
	int e;

	e = (a + b) * c / d;      // ( 30 * 15 ) / 5
	printf("(a + b) * c / d ��ֵ�� %d\n", e);

	e = ((a + b) * c) / d;    // (30 * 15 ) / 5
	printf("((a + b) * c) / d ��ֵ�� %d\n", e);

	e = (a + b) * (c / d);   // (30) * (15/5)
	printf("(a + b) * (c / d) ��ֵ�� %d\n", e);

	e = a + (b * c) / d;     //  20 + (150/5)
	printf("a + (b * c) / d ��ֵ�� %d\n", e);

	system("pause");
}