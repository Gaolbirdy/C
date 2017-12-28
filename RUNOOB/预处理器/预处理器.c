#include <stdio.h>
#include "myheader.h"

#define MAX_ARRAY_LENGTH 20

#undef FILE_SIZE
#define FILE_SIZE 42

#ifdef DEBUG

#endif // DEBUG


//#define message_for(a, b) printf(#a " and " #b ": We love you!\n")
#define message_for(a, b) \
	printf(#a " and " #b ": We love you!\n")

#define tokenpaster(n) printf("token" #n " = %d\n", token##n)

#ifndef  MESSAGE
#define MESSAGE "You wish 1!"
#endif // ! MESSAGE

#if !defined(MESSAGE)
	#define MESSAGE "You wish 2!"
#endif

#define square(x) (x * x)

#define MAX(x, y) (x > y ? x : y)

void main()
{
	printf("File :%s\n", __FILE__);
	printf("Date :%s\n", __DATE__);
	printf("Time :%s\n", __TIME__);
	printf("Line :%d\n", __LINE__);
	printf("ANSI :%d\n", __STDC_HOSTED__);

	message_for(Carole, Debra);

	int token34 = 40;
	tokenpaster(34);

	printf("Here is the message: %s\n", MESSAGE);

	int max = MAX(10, 20);
	printf("Max between 10 and 20 is %d\n", MAX(10, 20));
	printf("Max between 20 and 10 is %d\n", max);

	system("pause");
}

//int square(int x)
//{
//	return x * x;
//}