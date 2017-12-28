#include <stdio.h>

void main()
{
	char c;
	printf("输入一个字符：");

	scanf("%c", &c);

	printf("%c 的ASCII为 %d\n", c, c);

	system("pause");
}