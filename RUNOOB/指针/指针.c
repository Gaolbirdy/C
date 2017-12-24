#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void main()
//{
//	int var1;
//	char var2[10];
//
//	printf("var1 变量得地址: %p\n", &var1);
//	printf("var2 变量得地址: %p\n", &var2);
//	printf("var1 变量得地址: %0x\n", &var1);
//	printf("var2 变量得地址: %0x\n", &var2);
//
//	system("pause");
//}

//void main()
//{
//	int var = 20;
//	int *ip;
//
//	ip = &var;
//
//	printf("Address of var variable: %p\n", &var);
//
//	printf("Address stored in ip variable: %p\n", ip);
//
//	printf("Value of *(&var) variable: %d\n", *(&var));
//
//	printf("Value of *ip variable: %d\n", *ip);
//
//	system("pause");
//}

//void main()
//{
//	int *ptr = NULL;
//
//	printf("ptr 的值是  %p\n", ptr);
//	//printf("*ptr 的值是  %d\n", *ptr);
//
//	system("pause");
//}

//const int MAX = 3;
//
//void main()
//{
//	int var[] = { 10,100,200 };
//	int i, *ptr;
//
//	ptr = var;
//
//	for (i = 0; i < MAX; i++)
//	{
//		printf("存储地址：var[%d] = %x\n", i, ptr);
//		printf("存储值：var[%d] = %d\n", i, *ptr);
//
//		ptr++;
//	}
//
//	system("pause");
//}

//const int MAX = 3;
//
//void main()
//{
//	int var[] = { 10,100,200 };
//	int i, *ptr;
//
//	ptr = &var[MAX - 1];
//	for (i = MAX; i > 0; i--)
//	{
//		printf("存储地址: var[%d] = %x\n", i - 1, ptr);
//		printf("存储值: var[%d] = %d\n", i - 1 , *ptr);
//
//		ptr--;
//	}
//
//	system("pause");
//}

//const int MAX = 3;
//
//void main()
//{
//	int var[] = { 10,100,200 };
//	int i, *ptr;
//
//	ptr = var;
//	i = 0;
//
//	while (ptr <= &var[MAX - 1])
//	{
//		printf("Address of var[%d] = %x\n", i, ptr);
//		printf("Value of var[%d] = %d\n", i, *ptr);
//
//		ptr++;
//		i++;
//	}
//
//	system("pause");
//}

//const int MAX = 3;
//
//void main()
//{
//	int var[] = { 10,100,200 };
//	int i;
//
//	for (i = 0; i < MAX; i++)
//	{
//		printf("Value of var[%d] = %d\n", i, var[i]);
//	}
//
//	system("pause");
//}

//const int MAX = 3;
//
//void main()
//{
//	int var[] = { 10,100,200 };
//	int i, *ptr[3];
//
//	for (i = 0; i < MAX; i++)
//	{
//		ptr[i] = &var[i];
//	}
//
//	for (i = 0; i < MAX; i++)
//	{
//		printf("Value of var[%d] = %d\n", i, *ptr[i]);
//	}
//
//	system("pause");
//}

//const int MAX = 4;
//
//void main()
//{
//	char *names[] = {
//		"Zara Ali",
//		"Hina Ali",
//		"Nuha Ali",
//		"Sara Ali",
//	};
//	int i = 0;
//
//	for (i = 0; i < MAX; i++)
//	{
//		printf("Value of names[%d] = %s\n", i, names[i]);
//	}
//
//	system("pause");
//}

//void main()
//{
//	int var;
//	int *ptr;
//	int **pptr;
//
//	var = 3000;
//
//	ptr = &var;
//	
//	pptr = &ptr;
//
//	//*pptr = &var;
//
//	printf("Value of var = %d\n", var);
//	printf("Value available at *ptr = %d\n", *ptr);
//	printf("Value available at **ptr = %d\n\n", **pptr);
//
//	printf("Address of var = %p\n", &var);
//	printf("Address in ptr = %p\n", ptr);
//	printf("Value of *pptr = %p\n\n", *pptr);
//	
//	printf("Address of ptr = %p\n", &ptr);
//	printf("Address in pptr = %p\n", pptr);
//
//	system("pause");
//}

//void getSeconds(unsigned long *par);
//
//void main()
//{
//	unsigned long sec;
//
//	getSeconds(&sec);
//
//	printf("Number of seconds: %ld\n", sec);
//
//	system("pause");
//}
//
//void getSeconds(unsigned long *par)
//{
//	*par = time(NULL);
//}

//double getAverage(int *arr, int size);
//
//void main()
//{
//	int balance[5] = { 1000,2,3,17,50 };
//	double avg;
//
//	avg = getAverage(balance, 5);
//
//	printf("Average value is %f\n", avg);
//
//	system("pause");
//}
//
//double getAverage(int *arr, int size)
//{
//	int i, sum = 0;
//	double avg;
//
//	for (i = 0; i < size; i++)
//	{
//		sum += arr[i];
//		//sum += *(arr + i);
//	}
//
//	avg = (double)sum / size;
//	return avg;
//}

int * getRandom()
{
	static int r[10];
	int i;

	srand((unsigned)time(NULL));
	for (i = 0; i < 10; i++)
	{
		r[i] = rand();
		printf("%d\n", r[i]);
	}

	return r;
}

void main()
{
	int *p;
	int i;

	p = getRandom();
	for (i = 0; i < 10; i++)
	{
		printf("*(p + %d): %d\n", i, *(p + i));
	}

	system("pause");
}