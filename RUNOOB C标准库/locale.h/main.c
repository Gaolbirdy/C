#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <time.h>

//void main()
//{
//	time_t curtime;
//	struct tm *timer;
//	char buffer[80];
//
//	time(&curtime);
//	timer = localtime(&curtime);
//
//	printf("Locale is : %s\n", setlocale(LC_ALL, "en_GB"));
//	strftime(buffer, 80, "%c", timer);
//	printf("Date is : %s\n", buffer);
//
//	printf("Locale is : %s\n", setlocale(LC_ALL, "de_DE"));
//	strftime(buffer, 80, "%c", timer);
//	printf("Date is : %s\n", buffer);
//
//	getch();
//}

void main()
{
	struct lconv *lc;

	setlocale(LC_MONETARY, "it_IT");
	lc = localeconv();
	printf("Local Currency Symbol: %s\n", lc->currency_symbol);
	printf("International Currency Symbol: %s\n", lc->int_curr_symbol);

	setlocale(LC_MONETARY, "en_US");
	lc = localeconv();
	printf("Local Currency Symbol: %s\n", lc->currency_symbol);
	printf("International Currency Symbol: %s\n", lc->int_curr_symbol);

	setlocale(LC_MONETARY, "en_GB");
	lc = localeconv();
	printf("Local Currency Symbol: %s\n", lc->currency_symbol);
	printf("International Currency Symbol: %s\n", lc->int_curr_symbol);

	printf("Decimal Point =  %s\n", lc->decimal_point);

	getch();
}