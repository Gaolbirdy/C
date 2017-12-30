#include <stdio.h>
#include <conio.h>

void main()
{
	int number = 0;

	printf("enter a number:");
	scanf("%d", &number);

	if (number % 2 == 0)
	{
		printf("%d is even number\n", number);
	}
	else
	{
		printf("%d is odd number\n", number);
	}

	if (number == 10)
	{
		printf("number is equal to 10\n");
	}
	else if (number == 50)
	{
		printf("number is equal to 50\n");
	}
	else if (number == 100)
	{
		printf("number is equal to 100\n");
	}
	else
	{
		printf("number is not equal to 10, 50 or 100\n");
	}

	if (number >= 60)
	{
		if (number <= 80)
		{
			printf("分数大于60小于等于80，中等水平\n");
		}
		else if (number > 80 && number < 90)
		{
			printf("分数大于80小于90，成绩良好\n");
		}
		else
		{
			printf("分数大于等于90，成绩优秀\n");
		}
	}
	else
	{
		printf("分数小于60分，不及格!\n");
	}

	getch();
}