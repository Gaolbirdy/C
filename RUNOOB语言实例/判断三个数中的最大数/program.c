#include <stdio.h>

int main()
{
	double n1, n2, n3;

	printf("���������������Կո�ָ���");
	scanf("%lf %lf %lf", &n1, &n2, &n3);

	if (n1 >= n2 && n1 >= n3)
		printf("n1 %.2f �������\n", n1);

	if (n2 >= n1 && n2 >= n3)
		printf("n2 %.2f �������\n", n2);

	if (n3 >= n1 && n3 >= n2)
		printf("n3 %.2f �������\n", n3);

	system("pause");
}