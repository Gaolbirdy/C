#include <stdio.h>
#include <conio.h>

int minarray(int arr[], int size)
{
	int min = arr[0];
	int i = 0;

	for (i = 0; i < size; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	return min;
}

int minarrayP(int *arr, int size)
{
	int min = *arr;
	//int min = arr[0];
	//printf("%d %d\n", *arr, arr[0]);
	int i = 0;

	for (i = 0; i < size; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
		//printf("%d\n", arr[i]);
	}

	return min;
}

void main()
{
	int min = 0, minP = 0;
	int numbers[] = { 40,52,71,30,18,89 };
	int numbersP[] = { 40,52,71,5,18,89 };

	min = minarray(numbers, 6);
	minP = minarrayP(numbersP, 6);
	printf("minimum number is %d\n", min);
	printf("minimum number is %d\n", minP);

	getch();
}