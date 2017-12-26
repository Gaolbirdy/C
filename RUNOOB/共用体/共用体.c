#include <stdio.h>
#include <string.h>

union Data
{
	int i;
	float f;
	char str[20];
};

//void main()
//{
//	union Data data;
//
//	printf("Memory size occupied by data £º %d\n", sizeof(data));
//
//	system("pause");
//}

void main()
{
	union Data data;

	data.i = 10;
	printf("data.i : %d\n", data.i);

	data.f = 220.5;
	printf("data.f : %f\n", data.f);

	strcpy_s(data.str, 20, "C Programming");
	printf("data.str : %s\n", data.str);

	system("pause");
}
