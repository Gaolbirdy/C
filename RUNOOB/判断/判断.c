#include <stdio.h>

//main()
//{
//	int a = 10;
//
//	if (a < 20)
//	{
//		printf("a С�� 20\n");
//	}
//	printf("a ��ֵ�� %d\n", a);
//
//	system("pause");
//}

//void main()
//{
//	int a = 100;
//
//	if (a < 20)
//	{
//		printf("a С�� 20\n");
//	}
//	else
//	{
//		printf("a ���ڵ��� 20\n");
//	}
//	printf("a ��ֵ�� %d\n", a);
//
//	system("pause");
//}

//void main()
//{
//	int a = 100;
//
//	if (a == 10)
//	{
//		printf("a ��ֵ�� 10\n");
//	}
//	else if (a == 20)
//	{
//		printf("a ��ֵ�� 20\n");
//	}
//	else if (a == 30)
//	{
//		printf("a ��ֵ�� 30\n");
//	}
//	else
//	{
//		printf("û��ƥ���ֵ\n");
//	}
//	printf("a ��׼ȷֵ�� %d\n", a);
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
//			printf("a ��ֵ�� 100�� �� b ��ֵ�� 200\n");
//		}
//	}
//
//	printf("a ��׼ȷֵ�� %d\n", a);
//	printf("b ��׼ȷֵ�� %d\n", b);
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
//		printf("�ܰ�!\n");
//		break;
//	case 'B':
//	case 'C':
//		printf("���ú�\n");
//		break;
//	case 'D':
//		printf("��ͨ����\n");
//		break;
//	case 'F':
//		printf("�������һ��\n");
//		break;
//	default:
//		printf("��Ч�ĳɼ�\n");
//	}
//	printf("���ĳɼ��� %c\n", grade);
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
//			printf("�����ⲿ switch ��һ����\n");
//			switch (b)
//			{
//				case 200:
//					printf("�����ڲ� switch ��һ����\n");
//			}
//	}
//	printf("a ��׼ȷֵ�� %d\n", a);
//	printf("b ��׼ȷֵ�� %d\n", b);
//
//	system("pause");
//}

void main()
{
	int num;

	printf("����һ�����֣�");
	scanf_s("%d", &num);

	(num % 2 == 0) ? printf("ż��") : printf("����");

	system("pause");
}