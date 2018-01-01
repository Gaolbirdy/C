#include <stdio.h>
#include <time.h>
#include <string.h>

// 1
//void main()
//{
//	struct tm t;
//
//	t.tm_sec = 10;
//	t.tm_min = 10;
//	t.tm_hour = 6;
//	t.tm_mday = 25;
//	t.tm_mon = 2;
//	t.tm_year = 89;
//	t.tm_wday = 6;
//
//	puts(asctime(&t));
//
//	getch();
//}


// 2
//void main()
//{
//	clock_t start_t, end_t;
//	double total_t;
//	int i;
//
//	start_t = clock();
//	printf("程序启动： start_t = %ld\n", start_t);
//
//	printf("开始一个大循环, start_t = %ld\n", start_t);
//	for (i = 0; i < 1000000000; i++)
//	{
//	}
//	end_t = clock();
//	printf("大循环结束, end_t = %ld\n", end_t);
//
//	total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
//	printf("CPU 占用的总时间： %f\n", total_t);
//	printf("程序退出...\n");
//
//	getch();
//}

// 3
//void main()
//{
//	time_t curtime;
//
//	time(&curtime);
//
//	printf("当前时间 = %s", ctime(&curtime));
//
//	getch();
//}


// 4
//#ifdef _WIN32
//#include <Windows.h>
//#else
//#include <unistd.h>
//#endif // _WIN32
//
//void main()
//{
//	time_t start_t, end_t;
//	double diff_t;
//
//	printf("程序启动...\n");
//	time(&start_t);
//
//	printf("休眠5秒...\n");
//	Sleep(5000);
//
//	time(&end_t);
//	diff_t = difftime(end_t, start_t);
//
//	printf("执行时间 = %f\n", diff_t);
//	printf("程序退出...\n");
//
//	getch();
//}


// 5
//#define BST (+1)
//#define CCT (+8)
//
//void main()
//{
//	time_t rawtime;
//	struct tm *info;
//
//	time(&rawtime);
//	info = gmtime(&rawtime);
//
//	printf("当前的世界时钟：\n");
//	printf("伦敦：%2d:%02d\n", (info->tm_hour + BST) % 24, info->tm_min);
//	printf("中国：%2d:%02d\n", (info->tm_hour + CCT) % 24, info->tm_min);
//
//	getch();
//}


// 6
//void main()
//{
//	time_t rawtime;
//	struct tm *info;
//	//char buffer[80];
//
//	time(&rawtime);
//	info = localtime(&rawtime);
//
//	struct tm time = *info;
//
//	printf("当前的本地时间和日期：%s", asctime(info));
//	printf("当前的本地时间和日期：%s", asctime(&time));
//
//	getch();
//}


// 7
//void main()
//{
//	int ret;
//	struct tm info;
//	char buffer[80];
//
//	info.tm_year = 2001 - 1900;
//	info.tm_mon = 7 - 1;
//	info.tm_mday = 4;
//	info.tm_hour = 0;
//	info.tm_min = 0;
//	info.tm_sec = 1;
//	info.tm_isdst = -1;
//
//	ret = mktime(&info);
//	if (ret == -1)
//	{
//		printf("错误：不能使用 mktime 转换时间。\n");
//	}
//	else
//	{
//		strftime(buffer, sizeof(buffer), "%c", &info);
//		printf(buffer);
//	}
//
//	getch();
//}


// 8
//void main()
//{
//	time_t rawtime;
//	struct tm *info;
//	char buffer[80];
//
//	time(&rawtime);
//
//	info = localtime(&rawtime);
//
//	strftime(buffer, 80, "%x - %I:%M%p", info);
//	printf("格式化的日期 & 时间 ：|%s|\n", buffer);
//
//	getch();
//}


// 9
void main()
{
	time_t seconds;
	time_t seconds2;
	time_t seconds3 = 0;
	time_t seconds4 = 0;

	seconds = time(NULL);
	printf("自 1970-01-01起的小时数 = %ld\n", seconds / 3600);
	printf("自 1970-01-01起的秒数 = %ld\n\n", seconds);

	time(&seconds2);
	printf("自 1970-01-01起的小时数 = %ld\n", seconds2 / 3600);
	printf("自 1970-01-01起的秒数 = %ld\n\n", seconds2);

	printf("自 1970-01-01起的秒数 = %ld\n", time(NULL));
	printf("自 1970-01-01起的秒数 = %ld\n\n", time(0));

	printf("自 1970-01-01起的秒数 = %ld\n", time(seconds3));
	printf("自 1970-01-01起的秒数 = %ld\n\n", seconds3);

	printf("自 1970-01-01起的秒数 = %ld\n", time(&seconds4));
	printf("自 1970-01-01起的秒数 = %ld\n\n", seconds4);

	getch();
}