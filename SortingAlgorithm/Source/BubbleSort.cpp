#include "algorithm.h"

void BubbleSort(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		bool swapped = false;

		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				Swap(&arr[j], &arr[j + 1]);
				swapped = true;
			}
		}

		if (swapped == false)
		{
			break;
		}

	}
}