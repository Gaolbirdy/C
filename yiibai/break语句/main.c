#include <stdio.h>
#include <conio.h>

void main()
{
	int i = 1, j = 1;

	for (i = 1; i <= 10; i++)
	{
		printf("%d\n", i);
		if (i == 5)
		{
			break;
		}
	}

	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 3; j ++)
		{
			printf("%d %d\n", i, j);
			if (i == 2 && j == 2)
			{
				break;
			}
		}
	}

	getch();
}