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
	printf("%lf 的反余弦是 %lf 度\n", x, ret);

	ret = asin(x)*val;
	printf("%lf 的反正弦是 %lf 度\n", x, ret);

	x = 1.0;
	ret = atan(x)*val;
	printf("%lf 的反正切是 %lf 度\n", x, ret);

	x = -7.0;
	y = 7.0;
	ret = atan2(y, x)*val;
	printf("x = %lf, y = %lf 的反正切", x, y);
	printf("是 %lf 度\n", ret);

	x = 60.0;
	val = PI / 180.0;
	ret = cos(x*val);
	printf("%lf 的余弦是 %lf \n", x, ret);

	x = 90.0;
	val = PI / 180.0;
	ret = cos(x*val);
	printf("%lf 的余弦是 %lf \n", x, ret);

	getch();
}