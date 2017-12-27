#include <stdio.h>
#include <string.h>

void file()
{
	// ���ļ�
	FILE * fopen(const char * filname, const char * mode);
	
	// �ر��ļ�
	int fclose(FILE *fp);

	// д���ļ�
	// ���ַ�д�뵽����
	int fputc(int c, FILE *fp);

	// ��һ���� null ��β���ַ���д�뵽����
	int fputs(const char *s, FILE *fp);
	int fprintf(FILE *fp, const char *format);


	// ��ȡ�ļ�
	// ���ļ���ȡ�����ַ�
	int fgetc(FILE *fp);

	// �����ж�ȡһ���ַ���
	char * fgets(char *buf, int n, FILE *fp);
	int fscanf(FILE *fp, const char *format);


	// ������ I/O ����
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