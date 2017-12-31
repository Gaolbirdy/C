#include <stdio.h>
#include <conio.h>

//void main()
//{
//	FILE *fp;
//	fp = fopen("file.txt", "w");
//	fprintf(fp, "Hello file by fprintf...\n");
//	fclose(fp);
//	printf("Write to file: file.txt finished.\n");
//
//	char buff[255];
//	fp = fopen("file.txt", "r");
//	while (fscanf(fp, "%s", buff) != EOF)
//	{
//		printf("%s ", buff);
//	}
//	fclose(fp);
//
//	getch();
//}

void main()
{
	FILE *fptr;
	int id;
	char name[30];
	float salary;
	fptr = fopen("emp.txt", "w+");
	
	if (fptr == NULL)
	{
		printf("File does not exists\n");
		return;
	}

	printf("Enter the Emp ID:");
	scanf("%d", &id);
	fprintf(fptr, "Id = %d\n", id);
	
	printf("Enter the name:");
	scanf("%s", name);
	fprintf(fptr, "Name = %s\n", name);

	printf("Enter the salary:");
	scanf("%f", &salary);
	fprintf(fptr, "Salary = %.2f\n", salary);

	fclose(fptr);

	getch();
}