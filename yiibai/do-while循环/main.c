#include <stdio.h>
#include <conio.h>

void main()
{
	int i = 1, number = 0;
	
	printf("Enter a number:");
	scanf("%d", &number);
	
	do
	{
		printf("%d\n", i);
		i++;
	} while (i <= number);

	i = 1;
	do
	{
		printf("%d\n", number * i);
		i++;
	} while (i <= 10);

	do
	{
		printf("loop");
	} while (1);

	getch();
}
