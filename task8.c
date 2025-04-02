#include <stdio.h>
#define SIZE 7

int main()
{
	int arr[SIZE] = { 1, 3, 1, 5, 2, 3, 5 }; // 2 is unique

	int unique = 0;
	int is_unique = 1;

	for (int i = 0; i < SIZE; ++i, is_unique = 1)
	{
		unique = arr[i];
		for (int j = 0; j < SIZE; ++j)
		{
			if (unique == arr[j] && i != j)
			{
				is_unique = 0;
				break;
			}
		}
		if (is_unique == 1)
		{
			break;
		}
	}

	printf("unique = %d\n", unique);

	return 0;
}