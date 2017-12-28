#include <stdio.h>

void main()
{
	int firstNumber, secondNumber, sumOfTwoNumber;

	printf("输入两个整数(以空格分割): ");

	scanf("%d %d", &firstNumber, &secondNumber);

	sumOfTwoNumber = firstNumber + secondNumber;

	printf("%d + %d = %d\n", firstNumber, secondNumber, sumOfTwoNumber);

	system("pause");
}