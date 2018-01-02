#include <stdio.h>
#include <conio.h>
#include <ctype.h>


//void main()
//{
//	int var1 = 'd';
//	int var2 = '2';
//	int var3 = '\t';
//	int var4 = ' ';
//
//	if (isalnum(var1))
//	{
//		printf("var1 = |%c| 是字母数字\n", var1);
//	}
//	else
//	{
//		printf("var1 = |%c| 不是字母数字\n", var1);
//	}
//
//	if (isalnum(var2))
//	{
//		printf("var2 = |%c| 是字母数字\n", var2);
//	}
//	else
//	{
//		printf("var2 = |%c| 不是字母数字\n", var2);
//	}
//
//	if (isalnum(var3))
//	{
//		printf("var3 = |%c| 是字母数字\n", var3);
//	}
//	else
//	{
//		printf("var3 = |%c| 不是字母数字\n", var3);
//	}
//
//	if (isalnum(var4))
//	{
//		printf("var4 = |%c| 是字母数字\n", var4);
//	}
//	else
//	{
//		printf("var4 = |%c| 不是字母数字\n", var4);
//	}
//
//	getch();
//}

//void main()
//{
//	int var1 = 'd';
//	int var2 = '2';
//	int var3 = '\t';
//	int var4 = ' ';
//
//	if (isalpha(var1))
//	{
//		printf("var1 = |%c| 是一个字母\n", var1);
//	}
//	else
//	{
//		printf("var1 = |%c| 不是一个字母\n", var1);
//	}
//
//	if (isalpha(var2))
//	{
//		printf("var2 = |%c| 是一个字母\n", var2);
//	}
//	else
//	{
//		printf("var2 = |%c| 不是一个字母\n", var2);
//	}
//
//	if (isalpha(var3))
//	{
//		printf("var3 = |%c| 是一个字母\n", var3);
//	}
//	else
//	{
//		printf("var3 = |%c| 不是一个字母\n", var3);
//	}
//
//	if (isalpha(var4))
//	{
//		printf("var4 = |%c| 是一个字母\n", var4);
//	}
//	else
//	{
//		printf("var4 = |%c| 不是一个字母\n", var4);
//	}
//
//	getch();
//}

//void main()
//{
//	int i = 0, j = 0;
//	char str1[] = "all \a about \t programming";
//	char str2[] = "w3school \n tutorials";
//	
//	while (!iscntrl(str1[i]))
//	{
//		putchar(str1[i]);
//		i++;
//	}
//
//	while (!iscntrl(str2[j]))
//	{
//		putchar(str2[j]);
//		j++;
//	}
//
//	getch();
//}

//void main()
//{
//	int var1 = 'h';
//	int var2 = '2';
//
//	if (isdigit(var1))
//	{
//		printf("var1 = |%c| 是一个数字\n", var1);
//	}
//	else
//	{
//		printf("var1 = |%c| 不是一个数字\n", var1);
//	}
//
//	if (isdigit(var2))
//	{
//		printf("var2 = |%c| 是一个数字\n", var2);
//	}
//	else
//	{
//		printf("var2 = |%c| 不是一个数字\n", var2);
//	}
//
//	getch();
//}

//void main()
//{
//	int var1 = '3';
//	int var2 = 'm';
//	int var3 = ' ';
//
//	if (isgraph(var1))
//	{
//		printf("var1 = |%c| 是可打印的\n", var1);
//	}
//	else
//	{
//		printf("var1 = |%c| 是不可打印的\n", var1);
//	}
//
//	if (isgraph(var2))
//	{
//		printf("var2 = |%c| 是可打印的\n", var2);
//	}
//	else
//	{
//		printf("var2 = |%c| 是不可打印的\n", var2);
//	}
//
//	if (isgraph(var3))
//	{
//		printf("var3 = |%c| 是可打印的\n", var3);
//	}
//	else
//	{
//		printf("var3 = |%c| 是不可打印的\n", var3);
//	}
//
//	getch();
//}

//void main()
//{
//	int var1 = 'Q';
//	int var2 = 'q';
//	int var3 = '3';
//
//	if (islower(var1))
//	{
//		printf("var1 = |%c| 是小写字母\n", var1);
//	}
//	else
//	{
//		printf("var1 = |%c| 不是小写字母\n", var1);
//	}
//
//	if (islower(var2))
//	{
//		printf("var2 = |%c| 是小写字母\n", var2);
//	}
//	else
//	{
//		printf("var2 = |%c| 不是小写字母\n", var2);
//	}
//
//	if (islower(var3))
//	{
//		printf("var3 = |%c| 是小写字母\n", var3);
//	}
//	else
//	{
//		printf("var3 = |%c| 不是小写字母\n", var3);
//	}
//
//	getch();
//}

//void main()
//{
//	int var1 = 'k';
//	int var2 = '8';
//	int var3 = '\t';
//	int var4 = ' ';
//
//	if (isprint(var1))
//	{
//		printf("var1 = |%c| 是可打印的\n", var1);
//	}
//	else
//	{
//		printf("var1 = |%c| 是不可打印的\n", var1);
//	}
//
//	if (isprint(var2))
//	{
//		printf("var2 = |%c| 是可打印的\n", var2);
//	}
//	else
//	{
//		printf("var2 = |%c| 是不可打印的\n", var2);
//	}
//
//	if (isprint(var3))
//	{
//		printf("var3 = |%c| 是可打印的\n", var3);
//	}
//	else
//	{
//		printf("var3 = |%c| 是不可打印的\n", var3);
//	}
//
//	if (isprint(var4))
//	{
//		printf("var4 = |%c| 是可打印的\n", var4);
//	}
//	else
//	{
//		printf("var4 = |%c| 是不可打印的\n", var4);
//	}
//
//	getch();
//}

//void main()
//{
//	int var1 = 't';
//	int var2 = '1';
//	int var3 = '/';
//	int var4 = ' ';
//
//	if (ispunct(var1))
//	{
//		printf("var1 = |%c| 是标点符号字符\n", var1);
//	}
//	else
//	{
//		printf("var1 = |%c| 不是标点符号字符\n", var1);
//	}
//
//	if (ispunct(var2))
//	{
//		printf("var2 = |%c| 是标点符号字符\n", var2);
//	}
//	else
//	{
//		printf("var2 = |%c| 不是标点符号字符\n", var2);
//	}
//
//	if (ispunct(var3))
//	{
//		printf("var3 = |%c| 是标点符号字符\n", var3);
//	}
//	else
//	{
//		printf("var3 = |%c| 不是标点符号字符\n", var3);
//	}
//
//	if (ispunct(var4))
//	{
//		printf("var4 = |%c| 是标点符号字符\n", var4);
//	}
//	else
//	{
//		printf("var4 = |%c| 不是标点符号字符\n", var4);
//	}
//
//	getch();
//}

//void main()
//{
//	int var1 = 't';
//	int var2 = '1';
//	int var3 = ' ';
//
//	if (isspace(var1))
//	{
//		printf("var1 = |%c| 是空白字符\n", var1);
//	}
//	else
//	{
//		printf("var1 = |%c| 不是空白字符\n", var1);
//	}
//
//	if (isspace(var2))
//	{
//		printf("var2 = |%c| 是空白字符\n", var2);
//	}
//	else
//	{
//		printf("var2 = |%c| 不是空白字符\n", var2);
//	}
//
//	if (isspace(var3))
//	{
//		printf("var3 = |%c| 是空白字符\n", var3);
//	}
//	else
//	{
//		printf("var3 = |%c| 不是空白字符\n", var3);
//	}
//
//	getch();
//}

//void main()
//{
//	int var1 = 'M';
//	int var2 = 'm';
//	int var3 = '3';
//
//	if (isupper(var1))
//	{
//		printf("var1 = |%c| 是大写字母\n", var1);
//	}
//	else
//	{
//		printf("var1 = |%c| 不是大写字母\n", var1);
//	}
//
//	if (isupper(var2))
//	{
//		printf("var2 = |%c| 是大写字母\n", var2);
//	}
//	else
//	{
//		printf("var2 = |%c| 不是大写字母\n", var2);
//	}
//
//	if (isupper(var3))
//	{
//		printf("var3 = |%c| 是大写字母\n", var3);
//	}
//	else
//	{
//		printf("var3 = |%c| 不是大写字母\n", var3);
//	}
//
//	getch();
//}

//void main()
//{
//	char var1[] = "tuts";
//	char var2[] = "0xE";
//
//	if (isxdigit(var1[0]))
//	{
//		printf("var1 = |%s| 是十六进制数字\n", var1);
//	}
//	else
//	{
//		printf("var1 = |%s| 不是十六进制数字\n", var1);
//	}
//
//	if (isxdigit(var2[0]))
//	{
//		printf("var2 = |%s| 是十六进制数字\n", var2);
//	}
//	else
//	{
//		printf("var2 = |%s| 不是十六进制数字\n", var2);
//	}
//
//	getch();
//}

//void main()
//{
//	int i = 0;
//	char str[] = "W3CSCHOOL TUTORIALS";
//
//	while (str[i])	// 字符串末尾 '\0' == 0
//	{
//		putchar(tolower(str[i]));
//		i++;
//	}
//
//	getch();
//}

void main()
{
	int i = 0;
	char str[] = "W3CSCHOOL Tutorials";

	while (str[i])
	{
		putchar(toupper(str[i]));
		i++;
	}


	getch();
}