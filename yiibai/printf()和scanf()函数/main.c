#include <stdio.h>
#include <conio.h>

//void main()
//{
//	int number;
//
//	printf("enter a number: ");
//	scanf("%d", &number);
//
//	printf("cube of number is: %d \n", number*number*number);
//
//	getch();
//}

void main()
{
	int x = 0, y = 0, result = 0;

	printf("enter first number:");
	scanf("%d", &x);
	printf("enter second number:");
	scanf("%d", &y);

	result = x + y;
	printf("sum of 2 numbers: %d\n", result);

	getch();
}