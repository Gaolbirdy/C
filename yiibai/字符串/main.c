#include <stdio.h>
#include <conio.h>

void main()
{
	char ch[11] = { 'y', 'i', 'i', 'b', 'a', 'i', '.', 'c', 'o', 'm', '\0' };
	char ch2[] = "www.yiibai.com";
	char *ch3 = "www.runoob.com";

	printf("Char Array Value is %s\n", ch);
	printf("String Literal Value is %s\n", ch2);
	printf("Char Point Value is %s\n", ch3);
	printf("\n");

	printf("Char Array Value is %s\n", &ch[0]);
	printf("String Literal Value is %s\n", &ch2[0]);
	printf("Char Point Value is %s\n", &ch3[0]);
	printf("\n");

	printf("Char Array Value is %c\n", *ch);
	printf("String Literal Value is %c\n", *ch2);
	printf("Char Point Value is %c\n", *ch3);
	printf("\n");

	printf("Char Array Value is %c\n", ch[0]);
	printf("String Literal Value is %c\n", ch2[0]);
	printf("Char Point Value is %c\n", ch3[0]);
	printf("\n");

	printf("Char Array Address is %p\n", ch);
	printf("String Literal Address is %p\n", ch2);
	printf("Char Point Address is %p\n", ch3);
	printf("\n");

	printf("Char Array Address is %p\n", &ch[0]);
	printf("String Literal Address is %p\n", &ch2[0]);
	printf("Char Point Address is %p\n", &ch3[0]);
	printf("\n");

	getch();
}