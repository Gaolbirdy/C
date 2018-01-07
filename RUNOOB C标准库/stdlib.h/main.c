#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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

//void main()
//{
//	char command[50];
//
//	strcpy(command, "dir");
//	system(command);
//
//	getch();
//}

//int cmpfunc(const void *a, const void *b)
//{
//	return (*(int*)a - *(int*)b);
//}
//
//int values[] = { 5,20,29,32,63 };
//
//void main()
//{
//	int *item;
//	int key = 32;
//
//	// 使用bsearch()在数组中查找值32
//	item = (int*)bsearch(&key, values, 5, sizeof(int), cmpfunc);
//
//	if (item != NULL)
//	{
//		printf("Found item = %d\n", *item);
//	}
//	else
//	{
//		printf("Item = %d could not be found\n", *item);
//	}
//
//	getch();
//}

//int values[] = { 88,56,100,2,25 };
//
//int cmpfunc(const void *a, const void *b) 
//{
//	return (*(int*)a - *(int*)b);
//}
//
//void main()
//{
//	int n;
//
//	printf("排序之前的列表：\n");
//	for (n = 0; n < 5; n++)
//	{
//		printf("%d ", values[n]);
//	}
//
//	qsort(values, 5, sizeof(int), cmpfunc);
//
//	printf("\n排序之后的列表：\n");
//	for (n = 0; n < 5; n++)
//	{
//		printf("%d ", values[n]);
//	}
//
//	getch();
//}

//void main()
//{
//	int a, b;
//
//	a = abs(5);
//	printf("a 的值 = %d\n", a);
//
//	b = abs(-10);
//	printf("b 的值 = %d\n", b);
//
//	getch();
//}

//void main()
//{
//	div_t output;
//
//	output = div(27, 4);
//	printf("(27 / 4) 的商 = %d\n", output.quot);
//	printf("(27 / 4) 的余数 = %d\n", output.rem);
//
//	output = div(27, 3);
//	printf("(27 / 3) 的商 = %d\n", output.quot);
//	printf("(27 / 3) 的余数 = %d\n", output.rem);
//
//	getch();
//}

//void main()
//{
//	long int a, b;
//
//	a = labs(65987L);
//	printf("a 的值 = %ld\n", a);
//
//	b = labs(-1005090L);
//	printf("b 的值 = %ld\n", b);
//
//	getch();
//}

//void main()
//{
//	ldiv_t output;
//
//	output = ldiv(100000L, 30000L);
//
//	printf("商 = %ld\n", output.quot);
//	printf("余数 = %ld\n", output.rem);
//
//	getch();
//}

//void main()
//{
//	int i, n;
//	time_t t;
//
//	n = 5;
//
//	// 初始化随机数发生器
//	srand((unsigned)time(&t));
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%d\n", rand() % 50);
//	}
//
//	getch();
//}

//void main()
//{
//	int len;
//	char *pmbnull = NULL;
//	char *pmb = (char *)malloc(MB_CUR_MAX);
//	wchar_t *pwc = L"Hi";
//	wchar_t *pwcs = (wchar_t *)malloc(sizeof(wchar_t));
//
//	printf("转换为多字节字符串\n");
//	len = wcstombs(pmb, pwc, MB_CUR_MAX);
//	printf("被转换的字符 %d\n", len);
//	printf("%s 第一个多字节字符的十六进制值： %#.4x\n", pmb, pmb);
//
//	len = mblen(pmb, MB_CUR_MAX);
//	printf("多字节字符 %x 的字节长度: %u\n", pmb, len);
//
//	pmb = NULL;
//
//	len = mblen(pmb, MB_CUR_MAX);
//	printf("多字节字符 %x 的字节长度: %u\n", pmb, len);
//
//	getch();
//}

//void main()
//{
//	int len;
//	char *pmbnull = NULL;
//	char *pmb = (char *)malloc(MB_CUR_MAX);
//	wchar_t *pwc = L"Hi";
//	wchar_t *pwcs = (wchar_t *)malloc(sizeof(wchar_t));
//
//	printf("转换为多字节字符串\n");
//	len = wcstombs(pmb, pwc, MB_CUR_MAX);
//	printf("被转换的字符 %d\n", len);
//	printf("%s 第一个多字节字符的十六进制值： %#.4x\n", pmb, pmb);
//
//	printf("转换回宽字符字符串\n");
//	len = mbstowcs(pwcs, pmb, MB_CUR_MAX);
//	printf("被转换的字符 %d\n", len);
//	printf("第一个宽字符的十六进制值： %#.4x\n\n", pwcs);
//	
//	getch();
//}
//
//void main()
//{
//	char *str = "这里是runoob.com";
//	wchar_t mb[100];
//	int len;
//
//	len = mblen(NULL, MB_CUR_MAX);
//
//	mbtowc(mb, str, len*strlen(str));
//
//	wprintf(L"%ls \n", mb);
//
//
//	getch();
//}


//#define BUFFER_SIZE 50
//void main()
//{
//	size_t ret;
//	char *MB = (char *)malloc(BUFFER_SIZE);
//	wchar_t *WC = L"http://www.w3cschool.cc";
//
//	// 转换宽字符字符串
//	ret = wcstombs(MB, WC, BUFFER_SIZE);
//
//	printf("要转换的字符数 = %u\n", ret);
//	printf("多字节字符 = %s\n\n", MB);
//
//	getch();
//}

void main()
{
	int i;
	wchar_t wc = L'a';
	char *pmbnull = NULL;
	char *pmb = (char *)malloc(sizeof(char));

	printf("要转换的宽字符：\n");
	i = wctomb(pmb, wc);
	printf("被转换的字符：%u\n", i);
	printf("多字节字符：%.1s\n", pmb);
	
	printf("当要转换的字符为NULL时尝试转换：\n");
	i = wctomb(pmbnull, wc);
	printf("被转换的字符：%u\n", i);
	printf("多字节字符：%.1s\n", pmbnull);

	getch();
}