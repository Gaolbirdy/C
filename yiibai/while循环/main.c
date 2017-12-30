#include <stdio.h>
#include <conio.h>

void main()
{
	int i = 1, number = 0;

	printf("Enger a number:");
	scanf("%d", &number);

	while (i <= 10)
	{
		printf("%d\n", number * i);
		i++;
	}

	while (1)
	{
		printf("loop");
	}

	getch();
}