#include <stdio.h>

void main()
{
	int number;

	printf("������һ��������");
	scanf("%d", &number);

	if (number % 2 == 0)
		printf("%d ��ż����", number);
	else
		printf("%d ��������", number);

	system("pause");
}