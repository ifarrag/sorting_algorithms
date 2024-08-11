#include "sort.h"
#include <stdbool.h>
/**
 * bubble_sort - Sort array in ascending
 * @array: Pointer to array to sort
 * @size: The size to sort in the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 1;
	int temp = 0;
	bool sw = 0;

	while (array)
	{
		if (i == size && sw == 1)
		{
			i = 1;
			sw = 0;
		}
		if (i == size && sw == 0)
			break;
		if (array[i - 1] > array[i])
		{
			sw = 1;
			temp = array[i - 1];
			array[i - 1] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
		i++;
	}
}
