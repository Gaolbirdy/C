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
		printf("��ʼ����һ����...\n");
		Sleep(1000);
	}

	//getch();
}

void sighandler(int signum)
{
	printf("�����ź� %d ����...\n", signum);
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
//		printf("���󣺲��������źŴ������\n");
//		exit(0);
//	}
//	printf("��ʼ����һ���ź�\n");
//	ret = raise(SIGINT);
//	if (ret != 0)
//	{
//		printf("���󣺲������� SIGINT �źš�\n");
//		exit(0);
//	}
//	printf("�˳�...\n");
//
//	getch();
//}

void signal_catchfunc(int signal)
{
	printf("!! �źŲ��� !!\n");
}