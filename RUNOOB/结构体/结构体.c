#include <stdio.h>
#include <string.h>

//struct Books
//{
//	char title[50];
//	char author[50];
//	char subject[100];
//	int book_id;
//} testBook, book1, book2;
//
//void printBook(struct Books book);
//
//void inputBook(struct Books *book, char title[], char autor[], char subject[], int book_id);
//
//void main()
//{
//	//struct Books book1;	// 声明book1，类型为Books
//	//struct Books book2;	// 声明book2，类型为Books
//
//	// book1详述
//	//strcpy_s(book1.title, 50, "C Programming");
//	//strcpy_s(book1.author, 50, "Nuha Ali");
//	//strcpy_s(book1.subject, 50, "C Programming Tutorial");
//	//book1.book_id = 6495407;
//	inputBook(&book1, "c programming", "nuha ali", "c programming tutorial", 6495407);
//
//
//	// book2详述
//	//strcpy_s(book2.title, 50, "Telecom Billing");
//	//strcpy_s(book2.author, 50, "Zara Ali");
//	//strcpy_s(book2.subject, 50, "Telecom Billing Tutorial");
//	//book2.book_id = 6495700;
//	inputBook(&book2, "Telecom Billing", "Zara ali", "Telecom Billing Tutorial", 6495700);
//
//
//	printBook(book1);
//
//	printBook(book2);
//
//	//// 输出book1信息
//	//printf("book 1 title: %s\n", book1.title);
//	//printf("book 1 author: %s\n", book1.author);
//	//printf("book 1 subject: %s\n", book1.subject);
//	//printf("book 1 book_id: %d\n", book1.book_id);
//
//	//// 输出book2信息
//	//printf("book 2 title: %s\n", book2.title);
//	//printf("book 2 author: %s\n", book2.author);
//	//printf("book 2 subject: %s\n", book2.subject);
//	//printf("book 2 book_id: %d\n", book2.book_id);
//	
//	// testBook
//	//struct Books testBook;
//	///*strcpy_s(testBook.title, 50, "Test title");
//	//strcpy_s(testBook.author, 50, "Test author");
//	//strcpy_s(testBook.subject, 50, "Test subject");
//	//testBook.book_id = 101010;
//	//printBook(testBook);*/
//
//	
//	inputBook(&testBook, "Test title", "Test author", "Test subject", 101010);
//	printBook(testBook);
//
//	system("pause");
//}
//
//void printBook(struct Books book)
//{
//	printf("book title: %s\n", book.title);
//	printf("book author: %s\n", book.author);
//	printf("book subject: %s\n", book.subject);
//	printf("book book_id: %d\n", book.book_id);
//	printf("\n");
//}
//
//void inputBook(struct Books *book, char title[], char autor[], char subject[], int book_id)
//{
//	strcpy_s(book->title, 50, title);
//	strcpy_s(book->author, 50, autor);
//	strcpy_s(book->subject, 50, subject);
//	book->book_id = book_id;
//
//	//printf("%s\n", title);
//	//printf("%s\n", autor);
//	//printf("%s\n", subject);
//	//printf("%d\n", book_id);
//
//}

//void main()
//{
//	struct Books book3;
//	struct Books *struct_pointer;	// 指向结构的指针
//
//	struct_pointer = &book3;
//	struct_pointer->book_id = 1;
//
//	printf("%d\n", book3.book_id);
//	printf("%d\n", struct_pointer->book_id);
//	printf("%d\n\n", *&struct_pointer->book_id);
//
//	printf("%p\n", &book3);
//	printf("%p\n", struct_pointer);
//	printf("%p\n\n", *&struct_pointer);
//
//	printf("%p\n", &struct_pointer->book_id);
//	printf("%p\n\n", &book3.book_id);
//
//	printf("%p\n", &struct_pointer->title);
//	printf("%p\n\n", &book3.title);
//	
//	printf("%p\n", &struct_pointer);
//	//printf("%p\n", *struct_pointer);
//
//	system("pause");
//}

//void printBookWithPtr(struct Books *book);
//
//void main()
//{
//	struct Books book1;	// 声明book1，类型为Books
//	struct Books book2;	// 声明book2，类型为Books
//	
//	// book1详述
//	strcpy_s(book1.title, 50, "C Programming");
//	strcpy_s(book1.author, 50, "Nuha Ali");
//	strcpy_s(book1.subject, 50, "C Programming Tutorial");
//	book1.book_id = 6495407;
//
//	// book2详述
//	strcpy_s(book2.title, 50, "Telecom Billing");
//	strcpy_s(book2.author, 50, "Zara Ali");
//	strcpy_s(book2.subject, 50, "Telecom Billing Tutorial");
//	book2.book_id = 6495700;
//
//	printBookWithPtr(&book1);
//	printBookWithPtr(&book2);
//
//	system("pause");
//}
//
//void printBookWithPtr(struct Books *book)
//{
//	printf("book title: %s\n", book->title);
//	printf("book author: %s\n", book->author);
//	printf("book subject: %s\n", book->subject);
//	printf("book book_id: %d\n", book->book_id);
//	printf("\n");
//}

// data 为 bs 变量，共占两个字节。其中位域 a 占 8 位，位域 b 占 2 位，位域 c 占 6 位。
//struct bs
//{
//	int a : 8;
//	int b : 2;
//	int c : 6;
//} data ;
//
//struct packed_struct
//{
//	unsigned int f1 : 1;
//	unsigned int f2 : 1;
//	unsigned int f3 : 1;
//	unsigned int f4 : 1;
//	unsigned int type : 4;
//	unsigned int my_int : 9;
//};
//
//struct bs1 {
//	unsigned a : 4;
//	unsigned : 4;	// 空域
//	unsigned b : 4;	// 从下一单元开始存放
//	unsigned c : 4;
//};
//
//struct k
//{
//	int a : 1;
//	int   : 2;	// 该 2 位不能使用
//	int b : 3;
//	int c : 2;
//};

void main()
{
	struct bs
	{
		unsigned a : 1;
		unsigned b : 3;
		unsigned c : 4;
	} bit, *pbit;

	bit.a = 1;	// 给位域赋值（应注意赋值不能超过该位域的允许范围）
	bit.b = 7;
	bit.c = 15;
	printf("%d, %d, %d\n", bit.a, bit.b, bit.c);

	pbit = &bit;	// 把位域变量 bit 的地址送给指针变量 pbit
	pbit->a = 0;	// 用指针方式给位域 a 重新赋值，赋为 0 
	pbit->b &= 3;	// 使用了复合的位运算符 "&="，相当于：pbit->b=pbit->b&3，位域 b 中原有值为 7，与 3 作按位与运算的结果为 3（111&011=011，十进制值为 3）
	pbit->c |= 1;	// 使用了复合位运算符"|="，相当于：pbit->c=pbit->c|1，其结果为 15
	printf("%d, %d, %d\n", pbit->a, pbit->b, pbit->c);	// 指针方式输出了这三个域的值 

	system("pause");
}