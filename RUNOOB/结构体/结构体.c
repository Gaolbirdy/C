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
//	//struct Books book1;	// ����book1������ΪBooks
//	//struct Books book2;	// ����book2������ΪBooks
//
//	// book1����
//	//strcpy_s(book1.title, 50, "C Programming");
//	//strcpy_s(book1.author, 50, "Nuha Ali");
//	//strcpy_s(book1.subject, 50, "C Programming Tutorial");
//	//book1.book_id = 6495407;
//	inputBook(&book1, "c programming", "nuha ali", "c programming tutorial", 6495407);
//
//
//	// book2����
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
//	//// ���book1��Ϣ
//	//printf("book 1 title: %s\n", book1.title);
//	//printf("book 1 author: %s\n", book1.author);
//	//printf("book 1 subject: %s\n", book1.subject);
//	//printf("book 1 book_id: %d\n", book1.book_id);
//
//	//// ���book2��Ϣ
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
//	struct Books *struct_pointer;	// ָ��ṹ��ָ��
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
//	struct Books book1;	// ����book1������ΪBooks
//	struct Books book2;	// ����book2������ΪBooks
//	
//	// book1����
//	strcpy_s(book1.title, 50, "C Programming");
//	strcpy_s(book1.author, 50, "Nuha Ali");
//	strcpy_s(book1.subject, 50, "C Programming Tutorial");
//	book1.book_id = 6495407;
//
//	// book2����
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

// data Ϊ bs ��������ռ�����ֽڡ�����λ�� a ռ 8 λ��λ�� b ռ 2 λ��λ�� c ռ 6 λ��
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
//	unsigned : 4;	// ����
//	unsigned b : 4;	// ����һ��Ԫ��ʼ���
//	unsigned c : 4;
//};
//
//struct k
//{
//	int a : 1;
//	int   : 2;	// �� 2 λ����ʹ��
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

	bit.a = 1;	// ��λ��ֵ��Ӧע�⸳ֵ���ܳ�����λ�������Χ��
	bit.b = 7;
	bit.c = 15;
	printf("%d, %d, %d\n", bit.a, bit.b, bit.c);

	pbit = &bit;	// ��λ����� bit �ĵ�ַ�͸�ָ����� pbit
	pbit->a = 0;	// ��ָ�뷽ʽ��λ�� a ���¸�ֵ����Ϊ 0 
	pbit->b &= 3;	// ʹ���˸��ϵ�λ����� "&="���൱�ڣ�pbit->b=pbit->b&3��λ�� b ��ԭ��ֵΪ 7���� 3 ����λ������Ľ��Ϊ 3��111&011=011��ʮ����ֵΪ 3��
	pbit->c |= 1;	// ʹ���˸���λ�����"|="���൱�ڣ�pbit->c=pbit->c|1������Ϊ 15
	printf("%d, %d, %d\n", pbit->a, pbit->b, pbit->c);	// ָ�뷽ʽ��������������ֵ 

	system("pause");
}