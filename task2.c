#include <stdio.h>
#define SIZE 5

int main()
{
	int arr[SIZE] = {0};
	int counter = 0;

	for (int i = 0; i < SIZE; ++i)
	{
		printf("enter %d element\n", i);
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < SIZE; ++i)
	{
		if (arr[i] % 2 == 1)
		{
			++counter;
		}
	}

	printf("count = %d", counter);

	return 0;
}