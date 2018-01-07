#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <errno.h>

//void main()
//{
//	const char str[] = "http://www.runoob.com";
//	const char ch = '.';
//	char *ret;
//
//	ret = (char *)memchr(str, ch, strlen(str));
//
//	printf("|%c 之后的字符串是 - |%s|\n", ch, ret);
//
//	getch();
//}

//void main()
//{
//	char str1[15];
//	char str2[15];
//	int ret;
//
//	memcpy(str1, "abcdef", 6);
//	memcpy(str2, "ABCDEF", 6);
//
//	ret = memcmp(str1, str2, 5);
//
//	if (ret > 0)
//	{
//		printf("str2 小于 str1");
//	}
//	else if (ret < 0)
//	{
//		printf("str1 小于 str2");
//	}
//	else
//	{
//		printf("str1 等于 str2");
//	}
//
//	getch();
//}

//void main()
//{
//	const char src[50] = "http://www.w3cschool.cc";
//	char dest[50];
//
//	printf("Before memcpy dest = %s\n", dest);
//	memcpy(dest, src, strlen(src) + 1);
//	printf("After memcpy dest = %s\n", dest);
//
//	getch();
//}

//void main()
//{
//	const char dest[] = "oldstring";
//	const char src[] = "newstring";
//
//	printf("Before memmove dest = %s, src = %s\n", dest, src);
//	memmove(dest, src, 9);
//	printf("After memmove dest = %s, src = %s\n", dest, src);
//
//	getch();
//}

//void main()
//{
//	char str[50];
//
//	strcpy(str, "This is string.h library function");
//	puts(str);
//
//	memset(str, '$', 7);
//	puts(str);
//
//	getch();
//}

//void main()
//{
//	char src[50], dest[50];
//
//	strcpy(src, "This is source");
//	strcpy(dest, "This is destination");
//
//	strcat(dest, src);
//
//	printf("最终的目标字符串：|%s|", dest);
//
//	getch();
//}

//void main()
//{
//	char src[50], dest[50];
//
//	strcpy(src, "This is source");
//	strcpy(dest, "This is destination");
//
//	strncat(dest, src, 8);
//	printf("最终的目标字符串：|%s|", dest);
//
//	getch();
//}

//void main()
//{
//	const char str[] = "http://www.runoob.com";
//	const char ch = '.';
//	char *ret;
//
//	ret = strchr(str, ch);
//	printf("|%c| 之后的字符串是 - |%s|\n", ch, ret);
//
//	getch();
//}

//void main()
//{
//	char str1[15];
//	char str2[15];
//	int ret;
//
//	strcpy(str1, "abcdef");
//	strcpy(str2, "ABCDEF");
//
//	ret = strcmp(str1, str2);
//
//	if (ret < 0)
//	{
//		printf("str1 小于 str2");
//	}
//	else if (ret > 0)
//	{
//		printf("str2 小于 str1");
//	}
//	else
//	{
//		printf("str1 等于 str2");
//	}
//
//	getch();
//}

//void main()
//{
//	char str1[15];
//	char str2[15];
//	int ret;
//
//	strcpy(str1, "abcdef");
//	strcpy(str2, "ABCDEF");
//
//	ret = strncmp(str1, str2, 4);
//
//	if (ret < 0)
//	{
//		printf("str1 小于 str2");
//	}
//	else if (ret > 0)
//	{
//		printf("str2 小于 str1");
//	}
//	else
//	{
//		printf("str1 等于 str2");
//	}
//
//	getch();
//}

//void main()
//{
//	char str1[15];
//	char str2[15];
//	int ret;
//
//	strcpy(str1, "abc");
//	strcpy(str2, "ABC");
//
//	ret = strcoll(str1, str2);
//
//	if (ret > 0)
//	{
//		printf("str1 小于 str2");
//	}
//	else if (ret < 0)
//	{
//		printf("str2 小于 str1");
//	}
//	else
//	{
//		printf("str1 等于 str2");
//	}
//
//	getch();
//}

//void main()
//{
//	char src[40];
//	char dest[100];
//
//	memset(dest, '\0', sizeof(dest));
//	strcpy(src, "This is runoob.com");
//	strcpy(dest, src);
//
//	printf("最终的目标字符串： %s\n", dest);
//
//	getch();
//}

//void main()
//{
//	char src[40];
//	char dest[12];
//
//	memset(dest, '\0', sizeof(dest));
//	strcpy(src, "This is runoob.com");
//	strncpy(dest, src, 10);
//
//	printf("最终的目标字符串： %s\n", dest);
//
//	getch();
//}

//void main()
//{
//	int len;
//	const char str1[] = "ABCDEF4960910";
//	const char str2[] = "013";
//
//	len = strcspn(str1, str2);
//
//	printf("第一个匹配的字符是在 %d\n", len + 1);
//
//	getch();
//}

//void main()
//{
//	FILE *fp;
//
//	fp = fopen("file.txt", "r");
//	if (fp == NULL)
//	{
//		printf("Error: %s\n", strerror(errno));
//	}
//
//	getch();
//}

//void main()
//{
//	char str[50];
//	int len;
//
//	strcpy(str, "This is runoob.com");
//
//	len = strlen(str);
//	printf("|%s| 的长度是 %d\n", str, len);
//	printf("|%s| 的长度是 %d\n", str, strlen(str));
//
//	getch();
//}

//void main()
//{
//	const char str1[] = "abcde2fghi3jk4l";
//	const char str2[] = "34";
//	char *ret;
//
//	ret = strpbrk(str1, str2);
//	if (ret)
//	{
//		printf("第一个匹配的字符是：%c\n", *ret);
//	}
//	else
//	{
//		printf("未找到字符");
//	}
//
//	getch();
//}

//void main()
//{
//	int len;
//	const char str[] = "http://www.w3cschool.cc";
//	const char ch = '.';
//	char *ret;
//
//	ret = strrchr(str, ch);
//
//	printf("|%c| 之后的字符串是- |%s|\n", ch, ret);
//
//	getch();
//}


//void main()
//{
//	int len;
//	const char str1[] = "ABCDEFG019874";
//	const char str2[] = "ABCD";
//
//	len = strspn(str1, str2);
//
//	printf("初始段匹配长度 %d\n第一个不匹配字符 %c", len, str1[len]);
//
//	getch();
//}

//void main()
//{
//	const char haystack[20] = "RUNOOB";
//	const char needle[10] = "NOOB";
//	char *ret;
//
//	ret = strstr(haystack, needle);
//
//	printf("子字符串是： %s\n", ret);
//	printf("子字符串位置是： %p\n", ret);
//	printf("haystack字符串位置是： %p\n", haystack);
//
//	getch();
//}

//void main()
//{
//	const char str[80] = "This is - www.w3cschool.cc - website";
//	const char s[3] = "-.";
//	char *token;
//
//	token = strtok(str, s);
//
//	while (token != NULL)
//	{
//		printf("%s\n", token);
//		//printf("%p\n", token);
//
//		token = strtok(NULL, s);
//	}
//
//	getch();
//}

void main()
{
	char dest[20];
	char src[20];
	int len;

	strcpy(src, "W3C School");
	len = strxfrm(dest, src, 20);

	printf("字符串 |%s| 的长度： |%d|\n", dest, len);
	printf("字符串 |%s| 的长度： |%d|\n", src, strlen(src));

	getch();
}