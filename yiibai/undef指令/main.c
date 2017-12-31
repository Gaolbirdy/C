#include <stdio.h>
#include <conio.h>

#define PI 3.14
#undef PI

#define NUMBER 15
int square = NUMBER * NUMBER;
#undef NUMBER
//int cube = NUMBER * NUMBER * NUMBER;

void main()
{
	//printf("%f", PI);
	printf("%d", square);

	getch();
}