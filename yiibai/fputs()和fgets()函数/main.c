#include <stdio.h>
#include <conio.h>

void main()
{
	FILE *fp;

	fp = fopen("myfile2.txt", "w");

	fputs("hello c programming \n", fp);
	fputs("iibai tutorials c programming \n", fp);
	printf("all content had write to file: myfile2.txt\n");
	fclose(fp);

	char text[300];

	fp = fopen("myfile2.txt", "r");
	printf("%s", fgets(text, 200, fp));
	printf("%s", fgets(text, 200, fp));
	fclose(fp);

	getch();
}