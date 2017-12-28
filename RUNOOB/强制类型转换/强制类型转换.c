#include <stdio.h>

//void main()
//{
//	int sum = 17, count = 5;
//	double mean1, mean2, mean3;
//
//	mean1 = (double)sum / count;
//	mean2 = sum / count;
//	mean3 = (double)(sum / count);
//
//	printf("Value of mean1 : %f\n", mean1);
//	printf("Value of mean2 : %f\n", mean2);
//	printf("Value of mean2 : %f\n", mean3);
//
//	system("pause");
//}

void main()
{
	int i = 17;
	char c = 'c';	// asciiµÄÖµÊÇ99
	int sum1;
	float sum2;

	sum1 = i + c;
	sum2 = i + c;
	printf("Value of sum : %d\n", sum1);
	printf("Value of sum : %f\n", sum2);

	system("pause");
}