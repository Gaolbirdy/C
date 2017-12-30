#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char ch[20] = { 'y', 'i', 'i', 'b', 'a', 'i', '.', 'c', 'o', 'm', '\0' };
	char doname[] = "www.yiibai.com";
	
	printf("Length of string is: %d\n", strlen(ch));
	printf("Length of doname is: %d", strlen(doname));

	getch();
}
