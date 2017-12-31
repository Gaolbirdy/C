#include <stdio.h>
#include <conio.h>

#pragma startup func
#pragma exit func

void func();

void main()
{
	printf("\nI am in main");

	getch();
}

void func()
{
	printf("\nI am in func");
}