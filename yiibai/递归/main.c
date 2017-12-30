#include <stdio.h>
#include <conio.h>

int factorial(int n)
{
	int res;
	
	if (n < 0)
		res = -1;
	else if (n == 0)
		res = 1;
	else
		res = n * factorial(n - 1);

	printf("n : %d , res : %d\n", n, res);
	return res;
}

void main()
{
	int fact = 0;
	fact = factorial(5);
	printf("factorial of 5 is %d\n", fact);

	getch();
}