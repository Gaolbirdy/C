#include <stdio.h>
#include <conio.h>

void main()
{
	int i = 0, number = 0;

	printf("Enter a number:");
	scanf("%d", &number);

	for (i = 1; i <= 10; i++)
	{
		printf("%d\n", number * i);
	}

	for (;;)
	{
		printf("loop");
	}

	getch();
}