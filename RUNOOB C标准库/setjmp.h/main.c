#include <stdio.h>
#include <conio.h>
#include <setjmp.h>

static jmp_buf buf;

void second(void)
{
	printf("second\n");
	longjmp(buf, 1);	// ����setjmp�ĵ��ô� - ʹ��setjmp����ֵΪ1
}

void first(void)
{
	second();
	printf("first\n");	// ������ִ�е�����
}

void main()
{
	printf("%d\n", setjmp(buf));

	if (!setjmp(buf))
	{
		first();	// �������ǰ��setjmp����0
	}
	else// ��longjmp��ת�أ�setjmp����1����˽������
	{
		printf("main\n");
	}

	getch();
}