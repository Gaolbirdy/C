#include <stdio.h>
#include <conio.h>

void main()
{
	char name[50];
	printf("Enter your name:");
	char *str = gets(name);
	char *str2 = &name;
	char *str3 = name;

	printf("Your name is:");
	puts(name);
	printf("Your name is:%s\n", name);
	printf("Your name is:%s\n", str);
	printf("Your name is:%s\n", str2);
	printf("Your name is:%s\n", str3);

	printf("%p\n", name);
	printf("%p\n", &name);
	printf("%p\n", &name[0]);

	getch();
}