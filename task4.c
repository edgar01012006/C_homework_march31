#include <stdio.h>
#define SIZE 5

int main()
{
	int arr[SIZE] = {0};

	for (int i = 0; i < SIZE; ++i)
	{
		printf("enter %d element\n", i);
		scanf("%d", &arr[i]);
	}

	int swap = 0;
	int counter = 0;

	for (int i = 0; i < SIZE; ++i)
	{
		if (arr[i] % 2 == 0)
		{
			swap = arr[counter];
			arr[counter] = arr[i];
			arr[i] = swap;
			++counter;
		}
	}

	for (int i = 0; i < SIZE; ++i)
	{
		printf("%d element = %d\n", i, arr[i]);
	}

	return 0;
}