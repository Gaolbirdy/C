#include <stdio.h>
#include <conio.h>
#include <math.h>

#define PI 3.14159265

void main()
{
	double x, y, ret, val;

	x = 0.9;
	val = 180.0 / PI;

	ret = acos(x)*val;
	printf("%lf �ķ������� %lf ��\n", x, ret);

	ret = asin(x)*val;
	printf("%lf �ķ������� %lf ��\n", x, ret);

	x = 1.0;
	ret = atan(x)*val;
	printf("%lf �ķ������� %lf ��\n", x, ret);

	x = -7.0;
	y = 7.0;
	ret = atan2(y, x)*val;
	printf("x = %lf, y = %lf �ķ�����", x, y);
	printf("�� %lf ��\n", ret);

	x = 60.0;
	val = PI / 180.0;
	ret = cos(x*val);
	printf("%lf �������� %lf \n", x, ret);

	x = 90.0;
	val = PI / 180.0;
	ret = cos(x*val);
	printf("%lf �������� %lf \n", x, ret);

	getch();
}