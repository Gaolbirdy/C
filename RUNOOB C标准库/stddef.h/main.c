#include <stdio.h>
#include <conio.h>
#include <stddef.h>

struct address
{
	char name[50];
	char street[50];
	int phone;
};

//void main()
//{
//	FILE *fp;
//
//	fp = fopen("file.txt", "r");
//	if (fp != NULL)
//	{
//		printf("成功打开文件 file.txt\n");
//		fclose(fp);
//	}
//
//	fp = fopen("nofile.txt", "r");
//	if (fp == NULL)
//	{
//		printf("不能打开文件nofile.txt\n");
//	}
//	size_t
//	getch();
//}

void main()
{
	printf("address 结构中的 name偏移 = %d 字节。\n", offsetof(struct address, name));

	printf("address 结构中的 street偏移 = %d 字节。\n", offsetof(struct address, street));

	printf("address 结构中的 phone偏移 = %d 字节。\n", offsetof(struct address, phone));

	getch();
}