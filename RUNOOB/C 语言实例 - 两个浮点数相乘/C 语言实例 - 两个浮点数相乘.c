#include <stdio.h>

void main()
{
	double firstNumber, secondNumber, product;

	printf("����������������");

	scanf("%lf %lf", &firstNumber, &secondNumber);

	product = firstNumber * secondNumber;

	printf("��� %lf * %lf = %.2lf", firstNumber, secondNumber, product);

	system("pause");

}