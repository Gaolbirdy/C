#include <stdio.h>
#include <conio.h>
#include <assert.h>

void main()
{
	int a;
	char str[50];

	printf("请输入一个整数：");
	scanf("%d", &a);
	assert(a >= 10);
	printf("输入的整数是：%d\n", a);

	printf("请输入字符串：");
	scanf("%s", str);
	assert(str != NULL);
	printf("输入的字符串是：%s\n", str);

	getch();
}