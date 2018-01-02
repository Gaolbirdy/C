#include <stdio.h>
#include <conio.h>
#include <errno.h>
#include <string.h>
#include <math.h>

//extern int errno;

//void main()
//{
//	FILE *fp;
//
//	fp = fopen("file.txt", "r");
//
//	if (fp == NULL)
//	{
//		fprintf(stderr, "Value of errno: %d\n", errno);
//		fprintf(stderr, "Error opening file: %s\n", strerror(errno));
//	}
//	else
//	{
//		fclose(fp);
//	}
//
//	getch();
//}

//void main()
//{
//	double val;
//
//	errno = 0;
//	val = sqrt(-10);
//	if (errno == EDOM)
//	{
//		printf("Invalid value\n");
//	}
//	else
//	{
//		printf("Valid value\n");
//	}
//
//	errno = 0;
//	val = sqrt(10);
//	if (errno == EDOM)
//	{
//		printf("Invalid value\n");
//	}
//	else
//	{
//		printf("Valid value\n");
//	}
//
//	getch();
//}

void main()
{
	double x;
	double value;

	x = 2.000000;
	value = log(x);
	
	if (errno == ERANGE)
	{
		printf("Log(%f) is out of range\n", x);
	}
	else
	{
		printf("Log(%f) = %f\n", x, value);
	}

	x = 1.000000;
	value = log(x);

	if (errno == ERANGE)
	{
		printf("Log(%f) is out of range\n", x);
	}
	else
	{
		printf("Log(%f) = %f\n", x, value);
	}

	x = 0.000000;
	value = log(x);

	if (errno == ERANGE)
	{
		printf("Log(%f) is out of range\n", x);
	}
	else
	{
		printf("Log(%f) = %f\n", x, value);
	}
	
	getch();
}