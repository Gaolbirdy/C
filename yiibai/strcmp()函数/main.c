#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char str1[20], str2[20];

	while (1)
	{
		printf("Enter 1st string: ");
		gets(str1);
		printf("Enter 2nd string: ");
		gets(str2);

		if (strcmp(str1, str2) == 0)
			printf("Strings are equal \n");
		else
			printf("Strings are not equal \n");
	}

	getch();
}