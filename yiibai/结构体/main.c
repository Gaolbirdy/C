#include <stdio.h>
#include <conio.h>
#include <string.h>

struct employee
{
	int id;
	char name[50];
	float salary;
} e1, e2;

void main()
{
	//struct employee e1, e2;
	
	e1.id = 1001;
	strcpy(e1.name, "Max Su");
	e1.salary = 18000;

	e2.id = 1002;
	strcpy(e2.name, "Julian Lee");
	e2.salary = 15600;

	printf("employee 1 id: %d\n", e1.id);
	printf("employee 1 name: %s\n", e1.name);
	printf("employee 1 salary: %f\n", e1.salary);

	printf("employee 2 id: %d\n", e2.id);
	printf("employee 2 name: %s\n", e2.name);
	printf("employee 3 salary: %f\n", e2.salary);

	getch();
}