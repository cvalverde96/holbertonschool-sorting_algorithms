#include "sort.h"

void swap(int *a, int *b);
void printArray(int arr[], int size);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high, size_t size);

/**
 * quick_sort - function recursiva
 * @array: pointer a array
 * @size: tamaño de array
 */
void quick_sort(int *array, size_t size)
{
	int start = 0;
	int end = size - 1;

	quickSort(array, start, end, size);
}

/**
 * swap - function para swap
 * @a: pointer to int
 * @b: pointer to b
 */
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

/**
 * partition - function para partition
 * @arr: array
 * @low: valor low
 * @high: valor high
 * Return: int
 */

int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1);
	int j;

	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

/**
 * quickSort - function para quicksort
 * @arr: array
 * @low: valor min
 * @high: valor high
 * @size: tamano de arra
 */
void quickSort(int arr[], int low, int high, size_t size)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);

		print_array(arr, size);

		quickSort(arr, low, pi - 1, size);
		quickSort(arr, pi + 1, high, size);
	}

}

