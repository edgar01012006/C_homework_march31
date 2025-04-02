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

	int tmp = 0;

	for (int i = 0; i < SIZE - 1; ++i)
	{
		if (arr[i] < arr[i + 1])
		{
			printf("No\n");
			tmp = 1;
			break;
		}
	}

	if (tmp == 0)
	{
		printf("Yes\n");
	}

	return 0;
}