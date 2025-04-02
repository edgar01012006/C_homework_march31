#include <stdio.h>
#define SIZE 5

int main()
{
	int arr[SIZE] = {0};
	int target = 0;

	for (int i = 0; i < SIZE; ++i)
	{
		printf("enter %d element\n", i);
		scanf("%d", &arr[i]);
	}

	printf("enter target number\n");
	scanf("%d", &target);

	int tmp = 0;

	for (int i = 0; i < SIZE; ++i)
	{
		if (arr[i] == target)
		{
			printf("target has been found, index = %d", i);
			tmp = 1;
			break;
		}
	}

	if (tmp == 0)
	{
		printf("target hasn't been found, -1\n");
	}

	return 0;
}