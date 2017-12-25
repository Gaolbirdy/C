#include <stdio.h>
#include <string.h>

struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

void printBook(struct Books book);

void inputBook(struct Books book, char *title, char autor[], char subject[], int book_id);

void main()
{
	struct Books book1;	// 声明book1，类型为Books
	struct Books book2;	// 声明book2，类型为Books

	// book1详述
	strcpy_s(book1.title, 50, "C Programming");
	strcpy_s(book1.author, 50, "Nuha Ali");
	strcpy_s(book1.subject, 50, "C Programming Tutorial");
	book1.book_id = 6495407;

	// book2详述
	strcpy_s(book2.title, 50, "Telecom Billing");
	strcpy_s(book2.author, 50, "Zara Ali");
	strcpy_s(book2.subject, 50, "Telecom Billing Tutorial");
	book2.book_id = 6495700;

	printBook(book1);

	printBook(book2);

	//// 输出book1信息
	//printf("book 1 title: %s\n", book1.title);
	//printf("book 1 author: %s\n", book1.author);
	//printf("book 1 subject: %s\n", book1.subject);
	//printf("book 1 book_id: %d\n", book1.book_id);

	//// 输出book2信息
	//printf("book 2 title: %s\n", book2.title);
	//printf("book 2 author: %s\n", book2.author);
	//printf("book 2 subject: %s\n", book2.subject);
	//printf("book 2 book_id: %d\n", book2.book_id);
	
	// testBook
	struct Books testBook;
	strcpy_s(testBook.title, 50, "Test title");
	strcpy_s(testBook.author, 50, "Test author");
	strcpy_s(testBook.subject, 50, "Test subject");
	testBook.book_id = 101010;
	printBook(testBook);
	
	/*inputBook(testBook, "C Programming", "Nuha Ali", "C Programming Tutorial", 6495407);
	printBook(testBook);*/

	system("pause");
}

void printBook(struct Books book)
{
	printf("book title: %s\n", book.title);
	printf("book author: %s\n", book.author);
	printf("book subject: %s\n", book.subject);
	printf("book book_id: %d\n", book.book_id);
	printf("\n");
}

void inputBook(struct Books book, char *title, char autor[], char subject[], int book_id)
{
	
	printf("%s\n", title[0]);

	strcpy_s(book.title, 50, title);
	strcpy_s(book.author, 50, autor);
	strcpy_s(book.subject, 50, autor);
	book.book_id = book_id;
}