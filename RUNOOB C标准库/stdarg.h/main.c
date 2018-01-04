#include <stdio.h>
#include <conio.h>
#include <stdarg.h>

int sum(int, ...);

void main()
{
	printf("10、20和30的和 = %d\n", sum(3, 10, 20, 30));
	printf("4、20、25和30的和 = %d\n", sum(4, 4, 20, 25, 30));

	printf("15和56的和 = %d\n", sum(2, 15, 56));

	getch();
}

int sum(int num_args, ...)
{
	int val = 0;
	va_list ap;
	int i;

	va_start(ap, num_args);
	//((void)(ap = (va_list)_ADDRESSOF(num_args) + _INTSIZEOF(num_args)));
	for (i = 0; i < num_args; i++)
	{
		val += va_arg(ap, int);
	}
	va_end(ap);

	return val;
}