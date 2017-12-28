#include <stdio.h>
#include "header.h"

int x;
//char * test(void);

#ifndef HEADER_FILE
	#define HEADER_FILE
	#include"header.h"
#endif // !HEADER_FILE

#define SYSTEM_1 0
#define SYSTEM_2 2
#define SYSTEM_3 3

#if SYSTEM_1
	#include "system_1.h"
#elif SYSTEM_2
	#include "system_2.h"
#elif SYSTEM_3
#endif

#define SYSTEM_H "system_1.h"
#include SYSTEM_H


void main()
{
	puts(test());

	system("pause");
}

char * test(void)
{
	return "hello";
}