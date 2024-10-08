#include "sort.h"
/**
 * q_s - Quick sort
 * @Arr: Array
 * @low: Index 0
 * @high: Max Index
 * @size: size of the array
 */

void q_s(int *Arr, int *low, int *high, size_t size)
{
	int *i, *j, *pivot;
	int tmp;

	if (low >= high)
		return;

	i = low;
	j = low;
	pivot = high;
	for (; j != high; j++)
	{
		if (*j <= *pivot)
		{
			if (i != j)
			{
				tmp = *i;
				*i = *j;
				*j = tmp;
				print_array(Arr, size);
			}
			i++;
		}
	}

	tmp = *i;
	*i = *pivot;
	*pivot = tmp;
	if (i != pivot)
		print_array(Arr, size);

	if (i != low)
		q_s(Arr, low, --i, size);
	if (i != high)
		q_s(Arr, ++i, high, size);
}
/**
 * quick_sort - the Quick sort Algo
 * @array: array to be sorted
 * @size: the size of array
 */

void quick_sort(int *array, size_t size)
{
	if (size == 0 || array == NULL)
		return;
	q_s(array, &array[0], &array[size - 1], size);
}
