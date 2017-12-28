#include <stdio.h>

void main()
{
	double firstNumber, secondNumber, product;

	printf("输入两个浮点数：");

	scanf("%lf %lf", &firstNumber, &secondNumber);

	product = firstNumber * secondNumber;

	printf("结果 %lf * %lf = %.2lf", firstNumber, secondNumber, product);

	system("pause");

}