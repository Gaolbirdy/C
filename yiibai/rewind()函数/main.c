#include <stdio.h>
#include <conio.h>

void main()
{
	FILE *fp;
	char c;

	fp = fopen("string-file.txt", "r");
	while ((c = fgetc(fp)) != EOF)
	{
		printf("%c", c);
	}

	rewind(fp);

	while ((c = fgetc(fp)) != EOF)
	{
		printf("%c", c);
	}

	fclose(fp);

	getch();
}