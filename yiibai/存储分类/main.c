#include <stdio.h>
#include <conio.h>

extern int ex = 100;

void func()
{
	static int i = 0;
	int j = 0;
	i++;
	j++;
	printf("i = %d and j = %d\n", i, j);
}

void main()
{
	int a = 10;
	auto int b = 10;
	printf("%d %d\n", a, b);

	register int counter = 0;

	func();
	func();
	func();
	//printf("i = %d", i);

	printf("ex = %d\n", ex);

	getch();
}