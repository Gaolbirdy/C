#include <stdio.h>

void recursion()
{
	recursion();
}

double factorial(unsigned int i)
{
	if (i <= 1)
	{
		return 1;
	}
	
	return i * factorial(i - 1);
}

int fibonacci(int i)
{
	if (i <= 0)
	{
		return 0;
	}
	if (i == 1)
	{
		return 1;
	}

	return fibonacci(i - 1) + fibonacci(i - 2);
}

void main()
{
	//recursion();

	int i = 15;
	
	printf("%d µÄ½×³ËÎª %f\n", i, factorial(i));

	for (int j = 0; j < 10; j++)
	{
		printf("%d\t%d\n", j, fibonacci(j));
	}

	system("pause");
}