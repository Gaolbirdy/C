#include <stdio.h>
#include <conio.h>

#define PI 3.14159

#ifndef PI
#error First include then compile
#else
void main()
{
	float a = 1000.999;
	printf("a = %f\n", a);
	//printf("%f", PI);

	getch();
}
#endif