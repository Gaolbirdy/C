#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void main()
//{
//	char name[100];
//	char *description;
//
//	strcpy(name, "Zara Ali");
//
//	// ��̬�����ڴ�
//	//description = malloc(200 * sizeof(char));
//	description = calloc(200, sizeof(char));
//	if (description == NULL)
//	{
//		fprintf(stderr, "Error - unable to allocate required memory\n");
//	}
//	else
//	{
//		strcpy(description, "Zara ali a DPS student in class 10th");
//	}
//	printf("Name = %s\n", name);
//	printf("Description: %s\n", description);
//
//	system("pause");
//}

void main()
{
	char name[100];
	char *description;

	strcpy(name, "Zara Ali");

	// ��̬�����ڴ�
	description = malloc(30 * sizeof(char));
	//description = calloc(200, sizeof(char));
	if (description == NULL)
	{
		fprintf(stderr, "Error - unable to allocate required memory\n");
	}
	else
	{
		strcpy(description, "Zara ali a DPS student.");
	}

	// ��������Ҫ�洢�����������Ϣ
	description = realloc(description, 100 * sizeof(char));
	if (description == NULL)
	{
		fprintf(stderr, "Error - unable to allocate required memory\n");
	}
	else
	{
		strcat(description, "She is in class 10th.");
	}

	printf("Name = %s\n", name);
	printf("Description: %s\n", description);

	// ʹ��free()�����ͷ��ڴ�
	printf("%s\n", description);
	printf("%p\n", description);
	free(description);

	printf("%s\n", description);
	printf("%p\n", description);
	if (description != NULL)
	{
		printf("not NULL\n");
	}

	system("pause");
}