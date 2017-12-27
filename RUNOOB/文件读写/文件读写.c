#include <stdio.h>
#include <string.h>

void file()
{
	// 打开文件
	FILE * fopen(const char * filname, const char * mode);
	
	// 关闭文件
	int fclose(FILE *fp);

	// 写入文件
	// 把字符写入到流中
	int fputc(int c, FILE *fp);

	// 把一个以 null 结尾的字符串写入到流中
	int fputs(const char *s, FILE *fp);
	int fprintf(FILE *fp, const char *format);


	// 读取文件
	// 从文件读取单个字符
	int fgetc(FILE *fp);

	// 从流中读取一个字符串
	char * fgets(char *buf, int n, FILE *fp);
	int fscanf(FILE *fp, const char *format);


	// 二进制 I/O 函数
	size_t fread(void *ptr, size_t size_of_elements, size_t number_of_elements, FILE *a_file);
	size_t fwrite(const void *ptr, size_t size_of_elements, size_t number_of_elements, FILE *a_file);

}

//void main()
//{
//	FILE *fp = NULL;
//	
//	fp = fopen("tmp/test.txt", "w+");
//	//fp = fopen("/tmp/test.txt", "w+");
//	
//	//fputc(65, fp);
//	fprintf(fp, "This is testing for fprintf...\n");
//	fputs("This is testing for fputs...\n", fp);
//	fputs("\nby popo\n", fp);
//
//	fclose(fp);
//
//	char fileName[] = "tmp/test.txt";
//	fp = fopen(fileName, "a+");
//
//	char str[] = "char str\n";
//	fputs(str, fp);
//
//	fclose(fp);
//
//	system("pause");
//}

void main()
{
	FILE *fp = NULL;
	char buff[255];

	fp = fopen("tmp/test.txt", "r");
	fscanf(fp, "%s", buff);
	printf("1:%s\n", buff);
	fscanf(fp, "%s", buff);
	printf("2:%s\n", buff);

	fgets(buff, 255, (FILE*)fp);
	printf("3:%s\n", buff);

	fgets(buff, 255, (FILE*)fp);
	printf("4:%s\n", buff);

	fclose(fp);

	system("pause");
}