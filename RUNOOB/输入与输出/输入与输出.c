#include <stdio.h>

//void main()
//{
//	printf("����̳�");
//
//	int testinteger = 5;
//	printf("Number = %d", testinteger);
//
//	float f;
//	printf("Enter a number: ");
//	// %d ƥ�両������
//	scanf_s("%f", &f);
//	printf("Value = %f", f);
//
//	system("pause");
//}


//void main()
//{
//	int c;
//
//	printf("Enter a value:");
//	c = getchar();
//
//	printf("\nYou entered: ");
//	putchar(c);
//	//putchar('\n');
//	printf("\n");
//
//	system("pause");
//}


void main()
{
	char str[100];

	printf("Enter a value: ");
	gets(str);

	printf("\You entered: ");
	puts(str);

	system("pause");
}