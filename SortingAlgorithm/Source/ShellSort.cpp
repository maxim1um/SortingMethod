#include "algorithm.h"

void ShellSort(int arr[], int size)
{
	int count = 0;
	for (int gap = size / 2; gap > 0 ; gap /= 2 )
	{
		for (int i = gap; i < size; i++)
		{
			int temp = arr[i];

			int j = 0;
			for ( j = i; j >= gap && arr[j - gap] > temp; j -= gap)
			{
				arr[j] = arr[j - gap];
			}

			arr[j] = temp;
		}

		count += 1;
	}
}