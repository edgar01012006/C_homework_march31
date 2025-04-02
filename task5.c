#include <stdio.h>
#define SIZE 3

int main()
{
	int arr1[SIZE] = {0};
	int arr2[SIZE] = {0};

	for (int i = 0; i < SIZE; ++i)
	{
		printf("enter %d element\n", i);
		scanf("%d", &arr1[i]);
	}

	for (int i = 0; i < SIZE; ++i)
	{
		printf("enter %d element\n", i);
		scanf("%d", &arr2[i]);
	}

	int tmp = 0;

	for (int i = 0; i < SIZE; ++i)
	{
		if (arr1[i] != arr2[i])
		{
			tmp = 1;
			break;
		}
	}

	if (tmp == 0)
	{
		printf("arrays are identical\n");
	}
	else
	{
		printf("arrays are not identical\n");
	}

	return 0;
}