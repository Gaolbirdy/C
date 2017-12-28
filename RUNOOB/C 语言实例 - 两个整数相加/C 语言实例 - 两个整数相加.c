#include <stdio.h>

void main()
{
	int firstNumber, secondNumber, sumOfTwoNumbers;

	printf("输入两个整数（以空格分割）：");

	scanf("%d %d", &firstNumber, &secondNumber);

	sumOfTwoNumbers = firstNumber + secondNumber;

	printf("%d + %d = %d", firstNumber, secondNumber, sumOfTwoNumbers);

	system("pause");

}