#include <stdio.h>
#include <time.h>
#include <string.h>

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

//void main()
//{
//	clock_t start_t, end_t;
//	double total_t;
//	int i;
//
//	start_t = clock();
//	printf("���������� start_t = %ld\n", start_t);
//
//	printf("��ʼһ����ѭ��, start_t = %ld\n", start_t);
//	for (i = 0; i < 1000000000; i++)
//	{
//	}
//	end_t = clock();
//	printf("��ѭ������, end_t = %ld\n", end_t);
//
//	total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
//	printf("CPU ռ�õ���ʱ�䣺 %f\n", total_t);
//	printf("�����˳�...\n");
//
//	getch();
//}

//void main()
//{
//	time_t curtime;
//
//	time(&curtime);
//
//	printf("��ǰʱ�� = %s", ctime(&curtime));
//
//	getch();
//}

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
//	printf("��������...\n");
//	time(&start_t);
//
//	printf("����5��...\n");
//	Sleep(5000);
//
//	time(&end_t);
//	diff_t = difftime(end_t, start_t);
//
//	printf("ִ��ʱ�� = %f\n", diff_t);
//	printf("�����˳�...\n");
//
//	getch();
//}

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
//	printf("��ǰ������ʱ�ӣ�\n");
//	printf("�׶أ�%2d:%02d\n", (info->tm_hour + BST) % 24, info->tm_min);
//	printf("�й���%2d:%02d\n", (info->tm_hour + CCT) % 24, info->tm_min);
//
//	getch();
//}

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
//	printf("��ǰ�ı���ʱ������ڣ�%s", asctime(info));
//	printf("��ǰ�ı���ʱ������ڣ�%s", asctime(&time));
//
//	getch();
//}

void main()
{
	int ret;
	struct tm info;
	char buffer[80];

	info.tm_year = 2001 - 1900;
	info.tm_mon = 7 - 1;
	info.tm_mday = 4;
	info.tm_hour = 0;
	info.tm_min = 0;
	info.tm_sec = 1;
	info.tm_isdst = -1;

	ret = mktime(&info);
	if (ret == -1)
	{
		printf("���󣺲���ʹ�� mktime ת��ʱ�䡣\n");
	}
	else
	{

	}

	getch();
}