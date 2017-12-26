#include <stdio.h>
#include <string.h>

typedef unsigned char BYTE;

typedef struct Books
{
	char title[50];
	char autor[50];
	char subject[100];
	int book_id;
} Book;

#define TRUE 1
#define FALSE 0

void main()
{
	BYTE b1, b2;

	Book book;

	strcpy_s(book.title, 50, "C 教程");
	strcpy_s(book.autor, 50, "Runoob");
	strcpy_s(book.subject, 50, "编程语言");
	book.book_id = 12345;

	printf("书标题：%s\n", book.title);
	printf("书作者：%s\n", book.autor);
	printf("书类目：%s\n", book.subject);
	printf("书ID：%d\n", book.book_id);

	printf("TRUE 的值: %d\n", TRUE);
	printf("FALSE 的值: %d\n", FALSE);

	system("pause");
}