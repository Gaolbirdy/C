#include <stdio.h>
#include <conio.h>

void main()
{
	int d = 9 / 4;
	printf("d : %d\n", d);

	float f = (float)9 / 4;
	printf("f : %f\n", f);

	f = 9 / (float)4;
	printf("f : %f\n", f);

	f = (float)(9 / 4);
	printf("f : %f\n", f);

	getch();
}