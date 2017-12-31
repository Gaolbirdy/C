#include <stdio.h>
#include <conio.h>

void main()
{
	FILE *fp;
	long int length;

	fp = fopen("main.c", "r");
	fseek(fp, 0, SEEK_END);

	length = ftell(fp);

	fclose(fp);
	printf("Size of file: %d bytes", length);

	getch();
}