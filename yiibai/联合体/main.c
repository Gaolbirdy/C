#include <stdio.h>
#include <string.h>
#include <conio.h>

union employee
{
	int id;
	char name[150];
} e1;

//void main()
//{
//	e1.id = 1010;
//	strcpy(e1.name, "Maxsu");
//
//	printf("employee 1 id : %d, address: %u\ %p\n", e1.id, &e1.id, &e1.id);
//	printf("employee 1 name : %s, address: %u %p\n", e1.name, &e1.name, &e1.name);
//
//	e1.id = 1010;
//	printf("employee 1 id : %d, address: %u\ %p\n", e1.id, &e1.id, &e1.id);
//	printf("employee 1 name : %s, address: %u %p\n", e1.name, &e1.name, &e1.name);
//
//	getch();
//}

union U1
{
	char s[9];
	int n;
	double d;
} u1;

union U2
{
	char s[5];
	int n;
	double d;
} u2;

void main()
{
	printf("%d\n", sizeof(u1));
	printf("%d\n", sizeof(u2));

	printf("0x%x\n", &u1);
	printf("0x%x\n", &u1.s);
	printf("0x%x\n", &u1.n);
	printf("0x%x\n\n", &u1.d);

	printf("0x%x %u\n", &u1 + 1, &u1 + 1);
	printf("0x%x %u\n", &u1 + 2, &u1 + 2);
	printf("0x%x %u\n\n", &u1 + 3, &u1 + 3);

	printf("0x%x %u\n", &u2 + 1, &u2 + 1);
	printf("0x%x %u\n", &u2 + 2, &u2 + 2);
	printf("0x%x %u\n\n", &u2 + 3, &u2 + 3);

	u1.n = 1;
	printf("%d\n", u1.s[0]);
	printf("%lf\n", u1.d);

	unsigned char *p = (unsigned char *)&u1;

	printf("%d %p\n", *p, p);
	printf("%d %p\n", *(p + 1), p + 1);
	printf("%d %p\n", *(p + 2), p + 2);
	printf("%d %p\n", *(p + 3), p + 3);
	printf("%d %p\n", *(p + 4), p + 4);
	printf("%d %p\n", *(p + 5), p + 5);
	printf("%d %p\n", *(p + 6), p + 6);
	printf("%d %p\n", *(p + 7), p + 7);

	getch();
}