#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

void main()
{
	FILE *pf;
	int errnum;
	pf = fopen("unexist.txt", "rb");
	if (pf == NULL)
	{
		errnum = errno;
		fprintf(stderr, "����ţ�%d\n", errno);
		perror("ͨ�� perror �������");
		fprintf(stderr, "���ļ�����%s\n", strerror(errnum));
	}
	else
	{
		fclose(pf);
	}

	system("pause");
}