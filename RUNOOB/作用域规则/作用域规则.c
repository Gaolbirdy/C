#include <stdio.h>

//void main()
//{
//	int a, b;
//	int c;
//
//	a = 10;
//	b = 20;
//	c = a + b;
//
//	printf("value of a = %d, b = %d and c = %d\n", a, b, c);
//
//	system("pause");
//}

//int g;
//
//void main()
//{
//	int a, b;
//
//	a = 10;
//	b = 20;
//	printf("value of a = %d, b = %d and g = %d\n", a, b, g);
//
//	g = a + b;
//
//	printf("value of a = %d, b = %d and g = %d\n", a, b, g);
//
//	system("pause");
//}

//int g = 20;
//
//void main()
//{
//	int g = 10;
//
//	printf("value of g = %d\n", g);
//	system("pause");
//}

int a = 20;

void main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	int sum(int, int);

	printf("value of a in main() = %d\n", a);
	c = sum(a, b);
	printf("value of c in main() = %d\n", c);

	system("pause");
}

int sum(int a, int b)
{
	printf("value of a in sum() = %d\n", a);
	printf("value of b in sum() = %d\n", b);

	return a + b;
}

