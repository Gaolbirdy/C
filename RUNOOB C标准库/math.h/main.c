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

	x = 0.5;
	printf("%lf ��˫�������� %lf \n", x, cosh(x));

	x = 1.0;
	printf("%lf ��˫�������� %lf \n", x, cosh(x));

	x = 1.5;
	printf("%lf ��˫�������� %lf \n", x, cosh(x));

	x = 45.0;
	val = PI / 180.0;
	ret = sin(x*val);
	printf("%lf �������� %lf \n", x, ret);

	x = 0.5;
	ret = sinh(x);
	printf("%lf ��˫�������� %lf \n", x, ret);

	x = 0.5;
	ret = tanh(x);
	printf("%lf ��˫�������� %lf \n", x, ret);

	x = 0;
	printf("e ��%lf ������ %lf\n", x, exp(x));
	printf("e ��%lf ������ %lf\n", x + 1, exp(x + 1));
	printf("e ��%lf ������ %lf\n", x + 2, exp(x + 2));

	x = 1024;
	double fraction;
	int e;

	fraction = frexp(x, &e);
	printf("x = %.2lf = %.2lf * 2^%d\n", x, fraction, e);

	x = 0.65;
	e = 3;
	ret = ldexp(x, e);
	printf("%f * 2^%d = %f\n", x, e, ret);

	x = 2.7;
	ret = log(x);
	printf("log(%lf) = %lf\n", x, ret);

	x = 10000;
	ret = log10(x);
	printf("log10(%lf) = %lf\n", x, ret);

	double fractpart, intpart;
	x = 8.123456;
	fractpart = modf(x, &intpart);
	printf("�������� = %lf\n", intpart);
	printf("С������ = %lf\n", fractpart);

	printf("ֵ 8.0 ^ 3 = %lf\n", pow(8.0, 3));
	printf("ֵ 3.05 ^ 1.98 = %lf\n", pow(3.05, 1.98));

	printf("%lf ��ƽ������ %lf\n", 4.0, sqrt(4.0));
	printf("%lf ��ƽ������ %lf\n", 5.0, sqrt(5.0));

	float var1, var2, var3, var4;
	var1 = 1.6;
	var2 = 1.2;
	var3 = 2.8;
	var4 = 2.3;
	printf("value 1 = %.1f\n", ceil(var1));
	printf("value 2 = %.2f\n", ceil(var2));
	printf("value 3 = %.3f\n", ceil(var3));
	printf("value 4 = %.4f\n", ceil(var4));

	int a, b;
	a = 1234;
	b = -344;
	printf("%d �ľ���ֵ�� %lf\n", a, fabs(a));
	printf("%d �ľ���ֵ�� %lf\n", b, fabs(b));

	printf("value 1 = %.1f\n", floor(var1));
	printf("value 2 = %.2f\n", floor(var2));
	printf("value 3 = %.3f\n", floor(var3));
	printf("value 4 = %.4f\n", floor(var4));

	float m, n;
	m = 9.2;
	n = 3.7;
	int c = 2;
	printf("%f / %d �������� %lf\n", m, c, fmod(m, c));
	printf("%f / %f �������� %lf\n", m, n, fmod(m, n));
	//printf("%f / %f �������� %lf\n", m, c, m % c);
	//printf("%f / %f �������� %lf\n", m, n, m % n);

	getch();
}