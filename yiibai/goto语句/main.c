#include <stdio.h>
#include <conio.h>

void main()
{
	int age;

	gotolabel:
	printf("You are not eligible to vote!\n");

	printf("Enter your age:\n");
	scanf("%d", &age);
	
	if (age < 18)
	{
		goto gotolabel;
	}
	else
	{
		printf("You are eligible to vote!\n");
	}

	getch();
}