#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>

//void main()
//{
//	FILE *fp;
//
//	fp = fopen("file.txt", "w");
//
//	fprintf(fp, "%s\n", "������runoob.com");
//	fclose(fp);
//
//	getch();
//}

//void main()
//{
//	FILE *fp;
//	char c;
//
//	fp = fopen("file.txt", "w");
//
//	c = fgetc(fp);
//	if (ferror(fp))
//	{
//		printf("��ȡ�ļ� A�� file.txt ʱ��������\n");
//	}
//	clearerr(fp);
//	if (ferror(fp))
//	{
//		printf("��ȡ�ļ� B�� file.txt ʱ��������\n");
//	}
//	fclose(fp);
//
//	getch();
//}

//void main()
//{
//	FILE *fp;
//	int c;
//
//	fp = fopen("file.txt", "r");
//	if (fp == NULL)
//	{
//		perror("���ļ�ʱ��������");
//		return(-1);
//	}
//	while (1)
//	{
//		c = fgetc(fp);
//		if (feof(fp))
//		{
//			break;
//		}
//		printf("%c", c);
//	}
//	fclose(fp);
//
//	getch();
//}

//void main()
//{
//	FILE *fp;
//	char c;
//
//	fp = fopen("file.txt", "w");
//
//	c = fgetc(fp);
//	if (ferror(fp))
//	{
//		printf("��ȡ�ļ� A��file.txt ʱ��������\n");
//	}
//	clearerr(fp);
//	if (ferror(fp))
//	{
//		printf("��ȡ�ļ� B��file.txt ʱ��������\n");
//	}
//	fclose(fp);
//
//	getch();
//}

//void main()
//{
//	char buff[1024];
//
//	memset(buff, '\0', sizeof(buff));
//
//	fprintf(stdout, "����ȫ����\n");
//	setvbuf(stdout, buff, _IOFBF, 1024);
//
//	fprintf(stdout, "������runoob.com\n");
//	fprintf(stdout, "����������浽buff\n");
//	fflush(stdout);
//
//	fprintf(stdout, "�⽫�ڱ��ʱ����\n");
//	fprintf(stdout, "�������������\n");
//
//	Sleep(5000);
//
//	getch();
//}

//void main()
//{
//	FILE *fp;
//	fpos_t position;
//
//	fp = fopen("file.txt", "w+");
//	fgetpos(fp, &position);
//	fputs("Hello, World!", fp);
//
//	fsetpos(fp, &position);
//	fputs("�⽫����֮ǰ������", fp);
//	fclose(fp);
//
//	fp = fopen("file.txt", "r");
//	int c;
//	while (1)
//	{
//		c = fgetc(fp);
//		if (feof(fp))
//		{
//			break;
//		}
//		printf("%c", c);
//	}
//	fclose(fp);
//
//	getch();
//}

