#include <stdio.h>

void main()
{
	int dividend, divisor, quotient, remainder;

	printf("���뱻������");
	scanf("%d", &dividend);

	printf("���������");
	scanf("%d", &divisor);

	quotient = dividend / divisor;
	
	remainder = dividend % divisor;

	printf("�� = %d\n", quotient);
	printf("���� = %d\n", remainder);

	system("pause");
}