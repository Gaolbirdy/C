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
//	fprintf(fp, "%s\n", "这里是runoob.com");
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
//		printf("读取文件 A： file.txt 时发生错误\n");
//	}
//	clearerr(fp);
//	if (ferror(fp))
//	{
//		printf("读取文件 B： file.txt 时发生错误\n");
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
//		perror("打开文件时发生错误");
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
//		printf("读取文件 A：file.txt 时发生错误\n");
//	}
//	clearerr(fp);
//	if (ferror(fp))
//	{
//		printf("读取文件 B：file.txt 时发生错误\n");
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
//	fprintf(stdout, "启用全缓冲\n");
//	setvbuf(stdout, buff, _IOFBF, 1024);
//
//	fprintf(stdout, "这里是runoob.com\n");
//	fprintf(stdout, "该输出将保存到buff\n");
//	fflush(stdout);
//
//	fprintf(stdout, "这将在编程时出现\n");
//	fprintf(stdout, "最后休眠五秒钟\n");
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
//	fputs("这将覆盖之前的内容", fp);
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

