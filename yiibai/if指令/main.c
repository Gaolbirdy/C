#include <stdio.h>
#include <conio.h>

#define NUMBER 100

void main()
{
#if (NUMBER == 10)
	printf("Value of Number is: 10");
#else // NUMBER == 100
	printf("Value of Number is: %d", NUMBER);
#endif

	getch();
}