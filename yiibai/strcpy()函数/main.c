#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char ch[20] = { 'y', 'i', 'i', 'b', 'a', 'i', '.', 'c', 'o', 'm', '\0' };
	char ch2[20];

	strcpy(ch2, ch);
	printf("Value of second string is: %s\n", ch2);

	getch();
}