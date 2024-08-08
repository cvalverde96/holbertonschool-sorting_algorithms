#include "sort.h"

void swap(int *a, int *b, int *array, size_t size);
int partition(int arr[], int low, int high, int *array, size_t size);
void quickSort(int arr[], int low, int high, int *array, size_t size);

/**
 * quick_sort - function recursiva
 * @array: pointer a array
 * @size: tamaño de array
 */
void quick_sort(int *array, size_t size)
{
	int start = 0;
	int end = size - 1;

	quickSort(array, start, end, array, size);
}

/**
 * swap - function para swap
 * @a: pointer to int
 * @b: pointer to b
 * @array: array for printing
 * @size: size of array for printing
 */
void swap(int *a, int *b, int *array, size_t size)
{
	if (*a != *b)
	{
		int t = *a;
		*a = *b;
		*b = t;
		print_array(array, size);
	}
}

/**
 * partition - function para partition
 * @arr: array
 * @low: valor low
 * @high: valor high
 * @array: array for printing
 * @size: size of array for printing
 * Return: int
 */
int partition(int arr[], int low, int high, int *array, size_t size)
{
	int pivot = arr[high];
	int i = (low - 1);
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j], array, size);
		}
	}
	swap(&arr[i + 1], &arr[high], array, size);
	return (i + 1);
}

/**
 * quickSort - function para quicksort
 * @arr: array
 * @low: valor min
 * @high: valor high
 * @array: array for printing
 * @size: size of array for printing
 */
void quickSort(int arr[], int low, int high, int *array, size_t size)
{
	if (low < high)
	{
		int pi = partition(arr, low, high, array, size);

		quickSort(arr, low, pi - 1, array, size);
		quickSort(arr, pi + 1, high, array, size);
	}
}
