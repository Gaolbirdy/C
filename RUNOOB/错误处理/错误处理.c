#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

extern int errno;

//void main()
//{
//	FILE *pf;
//	int errnum;
//	pf = fopen("unexist.txt", "rb");
//	if (pf == NULL)
//	{
//		errnum = errno;
//		fprintf(stderr, "����ţ�%d\n", errno);
//		perror("ͨ�� perror �������");
//		fprintf(stderr, "���ļ�����%s\n", strerror(errnum));
//	}
//	else
//	{
//		fclose(pf);
//	}
//
//	system("pause");
//}

main()
{
	int dividend = 20;
	int divisor = 5;
	int quotient;

	if (divisor == 0)
	{
		fprintf(stderr, "����Ϊ0 �˳�����...\n");
		//fprintf(stderr, "����Ϊ0 �˳�����...%s\n", strerror(errno));

		system("pause");
		exit(EXIT_FAILURE);
	}

	quotient = dividend / divisor;
	//fprintf(stderr, "quotient ������ֵΪ��%d\n", quotient);
	fprintf(stderr, "quotient ������ֵΪ��%d %s\n", quotient, strerror(errno));

	system("pause");
	exit(EXIT_SUCCESS);
}