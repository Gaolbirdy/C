#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <corecrt_math_defines.h>
#include <stdarg.h>

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

//void main()
//{
//	FILE *fp;
//
//	fp = fopen("file.txt", "w+");
//	fprintf(fp, "%s %s %s %d", "We", "are", "in", 2014);
//
//	fclose(fp);
//
	//fp = fopen("file.txt", "r");
	//int c;
	//while (1)
	//{
	//	c = fgetc(fp);
	//	if (feof(fp))
	//	{
	//		break;
	//	}
	//	printf("%c", c);
	//}
	//fclose(fp);
//
//	getch();
//}

//void main()
//{
//	FILE *fp;
//
//	fp = fopen("file.txt", "w+");
//	fputs("This is runoob.com", fp);
//
//	fseek(fp, 7, SEEK_SET);
//	fputs(" C Programming Language", fp);
//
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
//	getch();
//}

//void main()
//{
//	FILE *fp;
//	int len;
//
//	fp = fopen("file.txt", "r");
//	if (fp == NULL)
//	{
//		perror("打开文件错误");
//		return (-1);
//	}
//	fseek(fp, 0, SEEK_END);
//
//	len = ftell(fp);
//	fclose(fp);
//
//	printf("file.txt 的总大小= %d 字节\n", len);
//
//	getch();
//}

//void main()
//{
//	FILE *fp;
//	char str[] = "This is runoob.com";
//
//	fp = fopen("file.txt", "w");
//	fwrite(str, 1, sizeof(str), fp);
//
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
//	getch();
//
//	getch();
//}

//void main()
//{
//	int ret;
//	FILE *fp;
//	char filename[] = "file.txt";
//
//	fp = fopen(filename, "w");
//	
//	fprintf(fp, "%s", "这里是 runoob.com");
//	fclose(fp);
//
//	ret = remove(filename);
//
//	if (ret == 0)
//	{
//		printf("文件删除成功");
//	}
//	else
//	{
//		printf("错误：不能删除文件");
//	}
//
//	getch();
//}

//void main()
//{
//	int ret;
//	char oldname[] = "file.txt";
//	char newname[] = "newfile.txt";
//
//	ret = rename(oldname, newname);
//
//	if (ret == 0)
//	{
//		printf("文件重命名成功");
//	}
//	else
//	{
//		printf("错误：不能重命名文件");
//	}
//	getch();
//}

//void main()
//{
//	char str[] = "This is runoob.com";
//	FILE *fp;
//	int ch;
//
//	fp = fopen("file.txt", "w");
//	fwrite(str, 1, sizeof(str), fp);
//	fclose(fp);
//
//	fp = fopen("file.txt", "r");
//	while (1)
//	{
//		ch = fgetc(fp);
//		if (feof(fp))
//		{
//			break;
//		}
//		printf("%c", ch);
//	}
//
//	rewind(fp);
//	printf("\n");
//	while (1)
//	{
//		ch = fgetc(fp);
//		if (feof(fp))
//		{
//			break;
//		}
//		printf("%c", ch);
//	}
//	fclose(fp);
//
//	getch();
//}

//void main()
//{
//	char buf[BUFSIZ];
//
//	setbuf(stdout, buf);
//	puts("This is runoob");
//
//	fflush(stdout);
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
//
//	fp = tmpfile();
//	printf("临时文件被创建\n");
//
//	fclose(fp);
//
//	getch();
//}

//void main()
//{
//	char buffer[L_tmpnam];
//	char *ptr;
//
//	tmpnam(buffer);
//	printf("临时名称 1: %s\n", buffer);
//
//	ptr = tmpnam(NULL);
//	printf("临时名称 2: %s\n", ptr);
//
//	getch();
//}

//void main()
//{
//	FILE *fp;
//	
//	fp = fopen("file.txt", "w+");
//	fprintf(fp, "%s %s %s %d", "We", "are", "in", 2014);
//
//	fclose(fp);
//
//	int c;
//	fp = fopen("file.txt", "r");
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
//	getch();
//}

//void main()
//{
//	int ch;
//	
//	for (ch = 65; ch <= 100; ch++)
//	{
//		printf("ASCII 值 = %d, 字符 = %c\n", ch, ch);
//	}
//
//	getch();
//}

//void main()
//{
//	char c, s[20], *p;
//	int a = 1234, *i;
//	float f = 3.141592653589;
//	double x = 0.12345678987654321;
//	p = "Howdoyoudo";
//	strcpy(s, "Hello,Comrade");
//	i = 12;
//	c = '\x41';
//
//	printf("a=%d\n", a);
//	printf("a=%6d\n", a);
//	printf("a=%06d\n", a);
//	printf("a=%2d\n", a);
//	
//	printf("i=%4d\n", i);
//	printf("i=%-4d\n", i);
//	printf("i=%p\n", i);
//
//	printf("f=%f\n", f);
//	printf("f=%6.4f\n", f);
//
//	printf("x=%lf\n", x);
//	printf("x=%18.16lf\n", x);
//
//	printf("%c\n", c);
//	printf("%x\n", c);
//
//	printf("s[]=%s\n", s);
//	printf("s[]=%6.9s\n", s);
//	printf("s=%p\n", s);
//
//	printf("p=%s\n", p);
//	printf("p=%p\n", p);
//
//	getch();
//}

//void main()
//{
//	char str[80];
//
//	sprintf(str, "Pi 的值 = %f",M_PI);
//	puts(str);
//
//	getch();
//}

//void WriteFrmtd(FILE *stream, char *format, ...)
//{
//	va_list args;
//
//	va_start(args, format);
//	vfprintf(stream, format, args);
//	va_end(args);
//}

//void main()
//{
//	FILE *fp;
//
//	fp = fopen("file.txt", "w");
//
//	WriteFrmtd(fp, "This is just one argument %d %d %d % d\n", 3, 10, 20, 30);
//
//	fclose(fp);
//	int c;
//
//	fp = fopen("file.txt", "r");
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

//void WriteFrmtd(char *format, ...)
//{
//	va_list args;
//
//	va_start(args, format);
//	vprintf(format, args);
//	va_end(args);
//}
//
//void main()
//{
//	WriteFrmtd("%d variable argument\n", 1);
//	WriteFrmtd("%d variable %s\n", 2, "arguments");
//
//	getch();
//}

//char buffer[80];
//int vspfunc(char *format, ...)
//{
//	va_list aptr;
//	int ret;
//
//	va_start(aptr, format);
//	ret = vsprintf(buffer, format, aptr);
//	va_end(aptr);
//
//	return(ret);
//}
//
//void main()
//{
//	int i = 5;
//	float f = 27.0;
//	char str[50] = "runoob.com";
//
//	vspfunc("%d %f %s", i, f, str);
//	printf("%s\n", buffer);
//
//	getch();
//}

//void main()
//{
//	char str1[10], str2[10], str3[10];
//	int year;
//	FILE *fp;
//
//	fp = fopen("file.txt", "w+");
//	fputs("We are in 2014", fp);
//
//	rewind(fp);
//	fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);
//
//	printf("Read String1 |%s|\n", str1);
//	printf("Read String2 |%s|\n", str2);
//	printf("Read String3 |%s|\n", str3);
//	printf("Read Integer |%d|\n", year);
//
//	fclose(fp);
//
//	getch();
//}