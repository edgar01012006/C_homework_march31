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

	char swap = '\0';
	int counter = SIZE - 1;

	for (int i = 0; i < SIZE / 2; ++i, --counter)
	{
		swap = arr[i];
		arr[i] = arr[counter];
		arr[counter] = swap;
	}

	for (int i = 0; i < SIZE; ++i)
	{
		printf("%d element = %c\n", i, arr[i]);
	}

	return 0;
}