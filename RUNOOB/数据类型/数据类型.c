#include <stdio.h>
//#include <limits.h>
#include <float.h>

//int main()
//{
//	printf("int �洢��С�� %lu \n", sizeof(int));
//
//	system("pause");
//	return 0;
//}

void main()
{
	printf("float �洢����ֽ���: %lu \n", sizeof(float));
	printf("float ��Сֵ: %E \n", FLT_MIN);
	printf("float ���ֵ: %E \n", FLT_MAX);
	printf("float ����ֵ: %d \n", FLT_DIG);

	system("pause");
}