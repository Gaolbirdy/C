#include <stdio.h>
#include <conio.h>
#include <assert.h>

void main()
{
	int a;
	char str[50];

	printf("������һ��������");
	scanf("%d", &a);
	assert(a >= 10);
	printf("����������ǣ�%d\n", a);

	printf("�������ַ�����");
	scanf("%s", str);
	assert(str != NULL);
	printf("������ַ����ǣ�%s\n", str);

	getch();
}