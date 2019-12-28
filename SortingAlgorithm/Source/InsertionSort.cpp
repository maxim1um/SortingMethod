#include "algorithm.h"

void InsertionSort(int arr[], int size)
{
	for (int i = 1; i < size; i++)
	{
		int key = arr[i];
		int j = i;

		while (j - 1 >= 0 && arr[j - 1] > key)
		{
			arr[j] = arr[j - 1];
			j -= 1;
		}

		arr[j] = key;
	}
}