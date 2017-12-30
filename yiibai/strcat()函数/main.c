#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char ch[32] = { 'y', 'i', 'i', 'b', 'a','i', '\0' };
	char ch2[10] = { '.', 'c','o','m','\0' };

	printf("Length of ch is: %d\n", strlen(ch));
	strcat(ch, ch2);
	printf("Length of ch is: %d\n", strlen(ch));
	printf("Value of first string is %s", ch);

	getch();
}