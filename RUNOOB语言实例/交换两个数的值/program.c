#include <stdio.h>

void main()
{
	double firstNumber, secondNumber, temp;

	printf("�����һ�����֣�");
	scanf("%lf", &firstNumber);

	printf("����ڶ������֣�");
	scanf("%lf", &secondNumber);

	temp = firstNumber;

	firstNumber = secondNumber;

	secondNumber = temp;

	printf("������firstNumber = %.2lf\n", firstNumber);
	printf("������secondNumber = %.2lf\n", secondNumber);

	system("pause");
}