#include<stdio.h>

void main()
{
	double firstNumber, secondNumber, product;
	printf("输入两个浮点数：");

	scanf("%lf %lf", &firstNumber, &secondNumber);

	product = firstNumber * secondNumber;

	printf("%lf * %lf = %.2lf\n", firstNumber, secondNumber, product);

	system("pause");
}