#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

//void main()
//{
//	float val;
//	char str[20];
//
//	strcpy(str, "98993489");
//	val = atof(str);
//	printf("�ַ���ֵ = %s, ����ֵ = %f\n", str, val);
//
//	strcpy(str, "runoob");
//	val = atof(str);
//	printf("�ַ���ֵ = %s, ����ֵ = %f\n", str, val);
//
//	getch();
//}

//void main()
//{
//	int val;
//	char str[20];
//
//	strcpy(str, "98993489");
//	val = atoi(str);
//	printf("�ַ���ֵ = %s, ����ֵ = %d\n", str, val);
//
//	strcpy(str, "runoob");
//	val = atoi(str);
//	printf("�ַ���ֵ = %s, ����ֵ = %d\n", str, val);
//
//	getch();
//}

//void main()
//{
//	int val;
//	char str[20];
//
//	strcpy(str, "98993489");
//	val = atol(str);
//	printf("�ַ���ֵ = %s, ������ֵ = %ld\n", str, val);
//
//	strcpy(str, "runoob");
//	val = atol(str);
//	printf("�ַ���ֵ = %s, ������ֵ = %ld\n", str, val);
//
//	getch();
//}

//void main()
//{
//	char str[30] = "20.30300 This is test";
//	char *ptr;
//	double ret;
//
//	ret = strtod(str, &ptr);
//	printf("���� (double) �� %lf\n", ret);
//	printf("�ַ��������� |%s|", ptr);
//
//	getch();
//}

//void main()
//{
//	char str[30] = "2030300 This is test";
//	char *ptr;
//	long ret;
//
//	ret = strtol(str, &ptr, 10);
//	printf("���� (�޷��ų�����) �� %ld\n", ret);
//	printf("�ַ��������� |%s|", ptr);
//
//	getch();
//}

//void main()
//{
//	char str[30] = "2030300 This is test";
//	char *ptr;
//	long ret;
//
//	ret = strtoul(str, &ptr, 10);
//	printf("���� (�޷��ų�����) �� %lu\n", ret);
//	printf("�ַ��������� |%s|", ptr);
//
//	getch();
//}

//void main()
//{
//	int i, n;
//	int *a;
//
//	printf("Ҫ�����Ԫ�ظ�����");
//	scanf("%d", &n);
//
//	a = (int*)calloc(n, sizeof(int));
//	printf("���� %d �����֣�\n", n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//	printf("���������Ϊ��");
//	for (i= 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//	getch();
//}

//void main()
//{
//	char *str;
//
//	str = (char*)malloc(15);
//	strcpy(str, "runoob");
//	printf("String = %s, Address = %d\n", str, str);
//
//
//	str = (char*)realloc(str, 25);
//	strcat(str, ".com");
//	printf("String = %s, Address = %d\n", str, str);
//
//	free(str);
//
//	getch();
//}

//void main()
//{
//	char *str;
//
//	str = (char*)malloc(15);
//	strcpy(str, "runoob");
//	printf("String = %s, Address = %u\n", str, str);
//
//	str = (char*)realloc(str, 25);
//	strcat(str, ".com");
//	printf("String = %s, Address = %u\n", str, str);
//
//	free(str);
//
//	getch();
//}

//void main()
//{
//	char *str;
//
//	str = (char*)malloc(15);
//	strcpy(str, "runoob");
//	printf("String = %s, Address = %u\n", str, str);
//
//	str = (char*)realloc(str, 25);
//	strcat(str, ".com");
//	printf("String = %s, Address = %u\n", str, str);
//
//	free(str);
//
//	getch();
//}

//void main()
//{
//	FILE *fp;
//
//	printf("׼���� nofile.txt\n");
//	fp = fopen("nofile.txt", "r");
//	if (fp == NULL)
//	{
//		printf("׼����ֹ����\n");
//		abort();
//	}
//	printf("׼���ر�nofile.txt\n");
//	fclose(fp);
//
//	getch();
//}

//void functionA()
//{
//	printf("������ֹ����A\n");
//}
//
//void main()
//{
//	atexit(functionA);
//
//	printf("����������...\n");
//
//	printf("�˳�������...\n");
//
//	return(0);
//}

//void main()
//{
//	printf("����Ŀ�ͷ....\n");
//
//	printf("�˳�����....\n");
//	exit(0);
//
//	printf("����Ľ�β....\n");
//
//	getch();
//}

//void main()
//{
//	printf("PATH : \%s\n", getenv("PATH"));
//	printf("HOME : \%s\n", getenv("HOME"));
//	printf("ROOT : \%s\n", getenv("ROOT"));
//
//	getch();
//}

void main()
{
	char command[50];

	strcpy(command, "ls -l");
	system(command);
}