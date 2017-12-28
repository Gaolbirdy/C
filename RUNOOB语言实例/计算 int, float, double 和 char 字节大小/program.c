#include <stdio.h>

void main()
{
	int integerType;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of int: %ld bytes\n", sizeof(int));
	printf("Size of float: %ld bytes\n", sizeof(float));
	printf("Size of double: %ld bytes\n", sizeof(double));
	printf("Size of char: %ld byte\n", sizeof(char));
	printf("\n");

	printf("Size of int: %ld bytes\n", sizeof(integerType));
	printf("Size of float: %ld bytes\n", sizeof(floatType));
	printf("Size of double: %ld bytes\n", sizeof(doubleType));
	printf("Size of char: %ld byte\n", sizeof(charType));
	printf("\n");

	int a;
	long b;
	long long c;

	double e;
	long double f;

	printf("Size of int: %ld bytes\n", sizeof(int));
	printf("Size of long: %ld bytes\n", sizeof(long));
	printf("Size of long long : %ld bytes\n", sizeof(long long));
	printf("Size of double: %ld bytes\n", sizeof(double));
	printf("Size of long double: %ld bytes\n", sizeof(long double));
	printf("\n");

	printf("Size of int: %ld bytes\n", sizeof(a));
	printf("Size of long: %ld bytes\n", sizeof(b));
	printf("Size of long long : %ld bytes\n", sizeof(c));
	printf("Size of double: %ld bytes\n", sizeof(e));
	printf("Size of long double: %ld bytes\n", sizeof(f));

	system("pause");
}