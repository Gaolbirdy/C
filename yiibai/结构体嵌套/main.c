#include <stdio.h>
#include <conio.h>
#include <string.h>

struct Employee
{
	int id;
	char name[20];
	struct Date
	{
		int dd;
		int mm;
		int yyyy;
	} doj;
} e1;

void main()
{
	e1.id = 1001;
	strcpy(e1.name, "Maxsu");
	e1.doj.dd = 12;
	e1.doj.mm = 11;
	e1.doj.yyyy = 2018;

	printf("employee id : %d\n", e1.id);
	printf("employee name : %s\n", e1.name);
	printf("employee date of joining (dd/mm/yyyy) : %d/%d/%d\n", e1.doj.dd, e1.doj.mm, e1.doj.yyyy);

	getch();
}