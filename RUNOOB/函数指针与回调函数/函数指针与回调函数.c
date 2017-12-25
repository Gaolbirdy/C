#include <stdio.h>
#include <stdlib.h>

////// ����һ��ָ��ͬ������������ֵ�ĺ���ָ������
//typedef int (*func_ptr)(int, int);
//
//int max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//void main()
//{
//	// p�Ǻ���ָ��
//	int (*p)(int, int) = &max;	// &����ʡ��
//	int a, b, c, d;
//
//	printf("�������������֣�");
//	scanf_s("%d %d %d", &a, &b, &c);
//
//	// ��ֱ�ӵ��ú����ȼۣ� d = max(max(a, b), c)
//	d = p(p(a, b), c);
//	printf("����������: %d\n", d);
//
//	system("pause");
//}

// �ص�����
void populate_array(int *array, size_t arraySize, int(*getNextValue)(void))
{
	for (size_t i = 0; i < arraySize; i++)
	{
		array[i] = getNextValue();
	}
}

// ��ȡ���ֵ
int getNextRandomValue(void)
{
	return rand();
}

void main()
{
	int myarray[10];
	populate_array(myarray, 10, getNextRandomValue);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", myarray[i]);
	}
	printf("\n");

	system("pause");
}