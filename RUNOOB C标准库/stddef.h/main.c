#include <stdio.h>
#include <conio.h>
#include <stddef.h>

struct address
{
	char name[50];
	char street[50];
	int phone;
};

//void main()
//{
//	FILE *fp;
//
//	fp = fopen("file.txt", "r");
//	if (fp != NULL)
//	{
//		printf("�ɹ����ļ� file.txt\n");
//		fclose(fp);
//	}
//
//	fp = fopen("nofile.txt", "r");
//	if (fp == NULL)
//	{
//		printf("���ܴ��ļ�nofile.txt\n");
//	}
//	size_t
//	getch();
//}

void main()
{
	printf("address �ṹ�е� nameƫ�� = %d �ֽڡ�\n", offsetof(struct address, name));

	printf("address �ṹ�е� streetƫ�� = %d �ֽڡ�\n", offsetof(struct address, street));

	printf("address �ṹ�е� phoneƫ�� = %d �ֽڡ�\n", offsetof(struct address, phone));

	getch();
}