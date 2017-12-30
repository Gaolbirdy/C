#include <stdio.h>
#include <conio.h>

void hello()
{
	printf("hello c programming\n");
}

int cube(int n)
{
	return n * n * n;
}

int max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

void main()
{
	hello();
	hello();
	hello();

	int res1, res2;
	int a = 10, b = 20, c = 0;

	res1 = cube(2);
	res2 = cube(5);

	c = max(a, b);

	printf("the cube of 2 is : %d\n", res1);
	printf("the cube of 5 is : %d\n", res2);
	printf("the max value of %d and %d is : %d\n", a, b, c);
	
	getch();
}