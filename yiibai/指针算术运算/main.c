#include <stdio.h>
#include <conio.h>

void main()
{
	int number = 50;
	int *p;
	p = &number;

	printf("Address of p variable is %u %p\n", p, p);
	printf("%d\n", *p);
	
	*(p + 1) = 1000;
	*(p - 1) = -1000;

	p = p + 1;
	printf("After increment : Address of p variable is %u %p\n", p, p);
	printf("%d\n", *p);

	p = p - 1;
	printf("After decrement : Address of p variable is %u %p\n", p, p);
	printf("%d\n", *p);

	p--;
	printf("After decrement : Address of p variable is %u %p\n", p, p);
	printf("%d\n", *p);

	p = p + 3;
	printf("After adding 3 : Address of p variable is %u %p\n", p, p);

	p = p - 3;
	printf("After subtracting 3 : Address of p variable is %u %p\n", p, p);

	getch();
}