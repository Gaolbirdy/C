#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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

//void main()
//{
//	char command[50];
//
//	strcpy(command, "dir");
//	system(command);
//
//	getch();
//}

//int cmpfunc(const void *a, const void *b)
//{
//	return (*(int*)a - *(int*)b);
//}
//
//int values[] = { 5,20,29,32,63 };
//
//void main()
//{
//	int *item;
//	int key = 32;
//
//	// ʹ��bsearch()�������в���ֵ32
//	item = (int*)bsearch(&key, values, 5, sizeof(int), cmpfunc);
//
//	if (item != NULL)
//	{
//		printf("Found item = %d\n", *item);
//	}
//	else
//	{
//		printf("Item = %d could not be found\n", *item);
//	}
//
//	getch();
//}

//int values[] = { 88,56,100,2,25 };
//
//int cmpfunc(const void *a, const void *b) 
//{
//	return (*(int*)a - *(int*)b);
//}
//
//void main()
//{
//	int n;
//
//	printf("����֮ǰ���б�\n");
//	for (n = 0; n < 5; n++)
//	{
//		printf("%d ", values[n]);
//	}
//
//	qsort(values, 5, sizeof(int), cmpfunc);
//
//	printf("\n����֮����б�\n");
//	for (n = 0; n < 5; n++)
//	{
//		printf("%d ", values[n]);
//	}
//
//	getch();
//}

//void main()
//{
//	int a, b;
//
//	a = abs(5);
//	printf("a ��ֵ = %d\n", a);
//
//	b = abs(-10);
//	printf("b ��ֵ = %d\n", b);
//
//	getch();
//}

//void main()
//{
//	div_t output;
//
//	output = div(27, 4);
//	printf("(27 / 4) ���� = %d\n", output.quot);
//	printf("(27 / 4) ������ = %d\n", output.rem);
//
//	output = div(27, 3);
//	printf("(27 / 3) ���� = %d\n", output.quot);
//	printf("(27 / 3) ������ = %d\n", output.rem);
//
//	getch();
//}

//void main()
//{
//	long int a, b;
//
//	a = labs(65987L);
//	printf("a ��ֵ = %ld\n", a);
//
//	b = labs(-1005090L);
//	printf("b ��ֵ = %ld\n", b);
//
//	getch();
//}

//void main()
//{
//	ldiv_t output;
//
//	output = ldiv(100000L, 30000L);
//
//	printf("�� = %ld\n", output.quot);
//	printf("���� = %ld\n", output.rem);
//
//	getch();
//}

//void main()
//{
//	int i, n;
//	time_t t;
//
//	n = 5;
//
//	// ��ʼ�������������
//	srand((unsigned)time(&t));
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%d\n", rand() % 50);
//	}
//
//	getch();
//}

//void main()
//{
//	int len;
//	char *pmbnull = NULL;
//	char *pmb = (char *)malloc(MB_CUR_MAX);
//	wchar_t *pwc = L"Hi";
//	wchar_t *pwcs = (wchar_t *)malloc(sizeof(wchar_t));
//
//	printf("ת��Ϊ���ֽ��ַ���\n");
//	len = wcstombs(pmb, pwc, MB_CUR_MAX);
//	printf("��ת�����ַ� %d\n", len);
//	printf("%s ��һ�����ֽ��ַ���ʮ������ֵ�� %#.4x\n", pmb, pmb);
//
//	len = mblen(pmb, MB_CUR_MAX);
//	printf("���ֽ��ַ� %x ���ֽڳ���: %u\n", pmb, len);
//
//	pmb = NULL;
//
//	len = mblen(pmb, MB_CUR_MAX);
//	printf("���ֽ��ַ� %x ���ֽڳ���: %u\n", pmb, len);
//
//	getch();
//}

//void main()
//{
//	int len;
//	char *pmbnull = NULL;
//	char *pmb = (char *)malloc(MB_CUR_MAX);
//	wchar_t *pwc = L"Hi";
//	wchar_t *pwcs = (wchar_t *)malloc(sizeof(wchar_t));
//
//	printf("ת��Ϊ���ֽ��ַ���\n");
//	len = wcstombs(pmb, pwc, MB_CUR_MAX);
//	printf("��ת�����ַ� %d\n", len);
//	printf("%s ��һ�����ֽ��ַ���ʮ������ֵ�� %#.4x\n", pmb, pmb);
//
//	printf("ת���ؿ��ַ��ַ���\n");
//	len = mbstowcs(pwcs, pmb, MB_CUR_MAX);
//	printf("��ת�����ַ� %d\n", len);
//	printf("��һ�����ַ���ʮ������ֵ�� %#.4x\n\n", pwcs);
//	
//	getch();
//}
//
//void main()
//{
//	char *str = "������runoob.com";
//	wchar_t mb[100];
//	int len;
//
//	len = mblen(NULL, MB_CUR_MAX);
//
//	mbtowc(mb, str, len*strlen(str));
//
//	wprintf(L"%ls \n", mb);
//
//
//	getch();
//}


//#define BUFFER_SIZE 50
//void main()
//{
//	size_t ret;
//	char *MB = (char *)malloc(BUFFER_SIZE);
//	wchar_t *WC = L"http://www.w3cschool.cc";
//
//	// ת�����ַ��ַ���
//	ret = wcstombs(MB, WC, BUFFER_SIZE);
//
//	printf("Ҫת�����ַ��� = %u\n", ret);
//	printf("���ֽ��ַ� = %s\n\n", MB);
//
//	getch();
//}

void main()
{
	int i;
	wchar_t wc = L'a';
	char *pmbnull = NULL;
	char *pmb = (char *)malloc(sizeof(char));

	printf("Ҫת���Ŀ��ַ���\n");
	i = wctomb(pmb, wc);
	printf("��ת�����ַ���%u\n", i);
	printf("���ֽ��ַ���%.1s\n", pmb);
	
	printf("��Ҫת�����ַ�ΪNULLʱ����ת����\n");
	i = wctomb(pmbnull, wc);
	printf("��ת�����ַ���%u\n", i);
	printf("���ֽ��ַ���%.1s\n", pmbnull);

	getch();
}