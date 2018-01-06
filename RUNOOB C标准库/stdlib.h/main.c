#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

//void main()
//{
//	float val;
//	char str[20];
//
//	strcpy(str, "98993489");
//	val = atof(str);
//	printf("字符串值 = %s, 浮点值 = %f\n", str, val);
//
//	strcpy(str, "runoob");
//	val = atof(str);
//	printf("字符串值 = %s, 浮点值 = %f\n", str, val);
//
//	getch();
//}

//void main()
//{
//	int val;
//	char str[20];
//
//	strcpy(str, "98993489");
//	val = atoi(str);
//	printf("字符串值 = %s, 整型值 = %d\n", str, val);
//
//	strcpy(str, "runoob");
//	val = atoi(str);
//	printf("字符串值 = %s, 整型值 = %d\n", str, val);
//
//	getch();
//}

//void main()
//{
//	int val;
//	char str[20];
//
//	strcpy(str, "98993489");
//	val = atol(str);
//	printf("字符串值 = %s, 长整型值 = %ld\n", str, val);
//
//	strcpy(str, "runoob");
//	val = atol(str);
//	printf("字符串值 = %s, 长整型值 = %ld\n", str, val);
//
//	getch();
//}

//void main()
//{
//	char str[30] = "20.30300 This is test";
//	char *ptr;
//	double ret;
//
//	ret = strtod(str, &ptr);
//	printf("数字 (double) 是 %lf\n", ret);
//	printf("字符串部分是 |%s|", ptr);
//
//	getch();
//}

//void main()
//{
//	char str[30] = "2030300 This is test";
//	char *ptr;
//	long ret;
//
//	ret = strtol(str, &ptr, 10);
//	printf("数字 (无符号长整数) 是 %ld\n", ret);
//	printf("字符串部分是 |%s|", ptr);
//
//	getch();
//}

//void main()
//{
//	char str[30] = "2030300 This is test";
//	char *ptr;
//	long ret;
//
//	ret = strtoul(str, &ptr, 10);
//	printf("数字 (无符号长整数) 是 %lu\n", ret);
//	printf("字符串部分是 |%s|", ptr);
//
//	getch();
//}

//void main()
//{
//	int i, n;
//	int *a;
//
//	printf("要输入的元素个数：");
//	scanf("%d", &n);
//
//	a = (int*)calloc(n, sizeof(int));
//	printf("输入 %d 个数字：\n", n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//	printf("输入的数字为：");
//	for (i= 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//	getch();
//}

//void main()
//{
//	char *str;
//
//	str = (char*)malloc(15);
//	strcpy(str, "runoob");
//	printf("String = %s, Address = %d\n", str, str);
//
//
//	str = (char*)realloc(str, 25);
//	strcat(str, ".com");
//	printf("String = %s, Address = %d\n", str, str);
//
//	free(str);
//
//	getch();
//}

//void main()
//{
//	char *str;
//
//	str = (char*)malloc(15);
//	strcpy(str, "runoob");
//	printf("String = %s, Address = %u\n", str, str);
//
//	str = (char*)realloc(str, 25);
//	strcat(str, ".com");
//	printf("String = %s, Address = %u\n", str, str);
//
//	free(str);
//
//	getch();
//}

//void main()
//{
//	char *str;
//
//	str = (char*)malloc(15);
//	strcpy(str, "runoob");
//	printf("String = %s, Address = %u\n", str, str);
//
//	str = (char*)realloc(str, 25);
//	strcat(str, ".com");
//	printf("String = %s, Address = %u\n", str, str);
//
//	free(str);
//
//	getch();
//}

//void main()
//{
//	FILE *fp;
//
//	printf("准备打开 nofile.txt\n");
//	fp = fopen("nofile.txt", "r");
//	if (fp == NULL)
//	{
//		printf("准备终止程序\n");
//		abort();
//	}
//	printf("准备关闭nofile.txt\n");
//	fclose(fp);
//
//	getch();
//}

//void functionA()
//{
//	printf("这是终止函数A\n");
//}
//
//void main()
//{
//	atexit(functionA);
//
//	printf("启动主程序...\n");
//
//	printf("退出主程序...\n");
//
//	return(0);
//}

//void main()
//{
//	printf("程序的开头....\n");
//
//	printf("退出程序....\n");
//	exit(0);
//
//	printf("程序的结尾....\n");
//
//	getch();
//}

//void main()
//{
//	printf("PATH : \%s\n", getenv("PATH"));
//	printf("HOME : \%s\n", getenv("HOME"));
//	printf("ROOT : \%s\n", getenv("ROOT"));
//
//	getch();
//}

void main()
{
	char command[50];

	strcpy(command, "ls -l");
	system(command);
}