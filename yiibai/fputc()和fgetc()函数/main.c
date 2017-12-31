#include <stdio.h>
#include <conio.h>

void main()
{
	FILE *fp;
	fp = fopen("myfile.txt", "w");

	fputc('y', fp);
	fputc('i', fp);
	fputc('i', fp);
	fputc('b', fp);
	fputc('a', fp);
	fputc('i', fp);
	fputc('.', fp);
	fputc('c', fp);
	fputc('o', fp);
	fputc('m', fp);
	fputc(65, fp);
	fclose(fp);

	printf("character have all write to file : myfile.txt\n");

	char c;

	fp = fopen("myfile.txt", "r");

	while (( c = fgetc(fp)) != EOF)
	{
		printf("%c", c);
	}
	fclose(fp);

	getch();
}