#include <stdio.h>
#include <conio.h>
#include <signal.h>
#include <Windows.h>
#include <stdlib.h>

void sighandler(int);

void signal_catchfunc(int);


void main()
{
	signal(SIGINT, sighandler);

	while (1)
	{
		printf("开始休眠一秒钟...\n");
		Sleep(1000);
	}

	//getch();
}

void sighandler(int signum)
{
	printf("捕获信号 %d 跳出...\n", signum);
	//exit(1);
}

//void main()
//{
//	int ret;
//
//	ret = signal(SIGINT, signal_catchfunc);
//
//	if (ret == SIG_ERR)
//	{
//		printf("错误：不能设置信号处理程序。\n");
//		exit(0);
//	}
//	printf("开始生成一个信号\n");
//	ret = raise(SIGINT);
//	if (ret != 0)
//	{
//		printf("错误：不能生成 SIGINT 信号。\n");
//		exit(0);
//	}
//	printf("退出...\n");
//
//	getch();
//}

void signal_catchfunc(int signal)
{
	printf("!! 信号捕获 !!\n");
}