#include "Common.h"

void SelectionSort(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int min_idx = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[min_idx])
			{
				min_idx = j;
			}
		}

		swap(&arr[min_idx], &arr[i]);
	}
}