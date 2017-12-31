#include <stdio.h>
#include <conio.h>

void main()
{
	FILE *fp;
	fp = fopen("myfile.txt", "w+");
	fputs("This is yiibai tutorial\n", fp);
	fputs("This is yiibai tutorial\n", fp);

	fseek(fp, 7, SEEK_SET);
	fputs("maxsu", fp);
	
	/*char text[500];
	fseek(fp, 0, SEEK_SET);
	printf("%s", fgets(text, 200, fp));*/

	fclose(fp);

	getch();
}