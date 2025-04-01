#include <stdio.h>
#define SIZE 5

int main()
{
	char arr[SIZE] = {'\0'};

	for (int i = 0; i < SIZE; ++i)
	{
		printf("enter %d element\n", i);
		scanf(" %c", &arr[i]);
	}

	for (int i = 0; i < SIZE; ++i)
	{
		if (arr[i] >= 97 && arr[i] <= 122)
		{
			arr[i] -= 32;
		}
	}

	for (int i = 0; i < SIZE; ++i)
	{
		printf("%d element = %c\n", i, arr[i]);
	}

	return 0;
}