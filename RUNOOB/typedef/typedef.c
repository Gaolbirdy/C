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

	strcpy_s(book.title, 50, "C �̳�");
	strcpy_s(book.autor, 50, "Runoob");
	strcpy_s(book.subject, 50, "�������");
	book.book_id = 12345;

	printf("����⣺%s\n", book.title);
	printf("�����ߣ�%s\n", book.autor);
	printf("����Ŀ��%s\n", book.subject);
	printf("��ID��%d\n", book.book_id);

	printf("TRUE ��ֵ: %d\n", TRUE);
	printf("FALSE ��ֵ: %d\n", FALSE);

	system("pause");
}