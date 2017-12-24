#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void main()
//{
//	////double balance[] = { 1000.0,2.0,3.4,7.0,50.0 };
//	//double balance[5] = { 1000.0,2.0,3.4,7.0,50.0 };
//
//	//balance[4] = 51.0;
//
//	int n[10];
//	int i, j;
//
//	for (i = 0; i < 10; i++)
//	{
//		n[i] = i + 100;
//	}
//
//	for (j = 0; j < 10; j++)
//	{
//		printf("Element[%d] = %d\n", j, n[j]);
//	}
//
//	system("pause");
//}

//void main()
//{
//	int a[5][2] =
//	{
//		{0,0},
//		{1,2},
//		{2,4},
//		{3,6},
//		{4,8},
//	};
//	int i, j;
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("a[%d][%d] = %d\n", i, j, a[i][j]);
//		}
//	}
//
//	system("pause");
//}

//double getAverage(int arr[], int size);
//
//void main()
//{
//	int balance[5] = { 1000,2,3,17,50 };
//	double avg;
//
//	avg = getAverage(balance, 5);
//
//	printf("平均值是: %f\n", avg);
//	system("pause");
//}
//
//double getAverage(int arr[], int size)
//{
//	int i;
//	double avg;
//	double sum = 0;
//
//	for (i = 0; i < size; i++)
//	{
//		sum += arr[i];
//	}
//
//	avg = sum / size;
//
//	return avg;
//}

//int * getRandom()
//{
//	static int r[10];
//	int i;
//
//	srand((unsigned)time(NULL));
//	for (i = 0; i < 10; i++)
//	{
//		r[i] = rand();
//		printf("r[%d] = %d\n", i, r[i]);
//	}
//
//	return r;
//}
//
//void main()
//{
//	int *p;
//	int i;
//
//	p = getRandom();
//	for (i = 0; i < 10; i++)
//	{
//		printf("*(p + %d) : %d\n", i, *(p + i));
//	}
//
//	system("pause");
//}

void main()
{
	double balance[5] = { 1000.0,2.0,3.4,17.0,50.0 };
	double *p;
	int i;

	p = balance;
	//p = &balance;

	printf("使用指针的数组值\n");
	for (i = 0; i < 5; i++)
	{
		printf("*(p + %d) : %f\n", i, *(p + i));
	}

	printf("使用 balance 作为地址的数组值\n");
	for (i = 0; i < 5; i++)
	{
		printf("*(balance + %d) : %f\n", i, *(balance + i));
	}

	printf("balance: %0x\n", balance);
	printf("&balance: %0x\n", &balance);

	system("pause");
}