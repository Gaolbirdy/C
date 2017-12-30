#include <stdio.h>
#include <conio.h>

void main()
{
	int i = 0;
	//int marks[5] = { 20,30,40,50,60 };
	int marks[] = {20,30,40,50,60};

	//marks[0] = 80;
	//marks[1] = 60;
	//marks[2] = 70;
	//marks[3] = 85;
	//marks[4] = 75;

	for (i = 0; i < 5; i++)
	{
		printf("marks[%d] : %d\n", i, marks[i]);
	}

	getch();
}