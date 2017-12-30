#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char str[20];

	printf("Enter string: ");
	gets(str);
	printf("String is: %s\n", str);
	printf("Upper String is: %s", strupr(str));

	getch();
}