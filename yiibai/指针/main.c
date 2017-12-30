#include <stdio.h>
#include <conio.h>

//void main()
//{
//	int x = 123;
//	int *p = &x;
//	int n = &x;
//	p = n;
//
//	printf("%d\n", *p);
//	printf("%d %0x %p %u\n", &x, &x, &x, &x);
//	printf("%d %0x %p %u\n", p, p, p, p);
//	printf("%d %0x %p %u\n", n, n, n, n);
//
//	getch();
//}

//void main()
//{
//	int number = 50;
//	int *p = NULL;
//
//	printf("Address of p variable is %p\n", p);
//
//	p = &number;
//
//	printf("value of number is %d, address of number is %u\n", number, &number);
//
//	printf("Address of number variable is %x\n", &number);
//	printf("Address of p variable is %x\n", p);
//	printf("Value of p variable is %d\n", *p);
//
//	getch();
//}

void main()
{
	int a = 10, b = 20;
	int *p1 = &a, *p2 = &b;

	//printf("Before swap : a = %d b = %d\n", a, b);

	//a = a + b;
	//b = a - b;	// b == a + b - b == a
	//a = a - b;	// a == a + b - a == b

	//printf("After swap : a = %d b = %d\n\n", a, b);

	printf("Before swap : *p1 = %d *p2 = %d\n", *p1, *p2);

	*p1 = *p1 + *p2;
	*p2 = *p1 - *p2;
	*p1 = *p1 - *p2;

	printf("After swap : *p1 = %d *p2 = %d\n", *p1, *p2);

	getch();
}