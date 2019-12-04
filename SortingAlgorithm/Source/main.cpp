#include "algorithm.h"

int main(int argc, char* argv[])
{
	int arr[] = { 12, 34, 54, 2, 3 }, i;
	int n = sizeof(arr) / sizeof(arr[0]);

	//BubbleSort(arr, n);
	//InsertionSort(arr, n);
	//SelectionSort(arr, n);
	ShellSort(arr, n);
	
	return 0;
}
