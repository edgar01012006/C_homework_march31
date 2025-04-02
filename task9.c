#include <stdio.h>
#define SIZE 10

int main()
{
	int arr[SIZE - 1] = { 1, 5, 6, 4, 3, 8, 9, 7, 10 }; // 2 is missing number
	int is_missing_number = 1;

	for (int i = 1; i <= SIZE; ++i, is_missing_number = 1)
	{
		for (int j = 0; j < SIZE - 1; ++j)
		{
			if (arr[j] == i)
			{
				is_missing_number = 0;
				break;		
			}
		}
		if (is_missing_number == 1)
		{
			printf("missing number is %d\n", i);
			break;
		}
	}

	return 0;
}