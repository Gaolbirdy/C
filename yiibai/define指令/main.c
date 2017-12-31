#include <stdio.h>
#include <conio.h>

#define PI 3.14

#define MIN(a, b) (a < b ? a : b)

void main()
{
	printf("%f", PI);
	
	printf("Minimum between 10 and 20 is %d\n", MIN(10, 20));

	getch();
}