#include <stdio.h>

void main()
{
	double firstNumber, secondNumber, temp;

	printf("输入第一个数字：");
	scanf("%lf", &firstNumber);

	printf("输入第二个数字：");
	scanf("%lf", &secondNumber);

	temp = firstNumber;

	firstNumber = secondNumber;

	secondNumber = temp;

	printf("交换后，firstNumber = %.2lf\n", firstNumber);
	printf("交换后，secondNumber = %.2lf\n", secondNumber);

	system("pause");
}