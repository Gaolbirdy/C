#include <stdio.h>
#include <conio.h>

void main(int argc, char *argv[])
{
	printf("Program name is : %s\n", argv[0]);
	//printf("Program name is : %s\n", *param);
	if (argc < 2)
	{
		printf("No argument passed through command line.\n");
	}
	else
	{
		printf("first argument is : %s\n", argv[1]);
	}

	getch();
}