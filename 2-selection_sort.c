#include "sort.h"
#include <stdbool.h>

/**
 * selection_sort - sorts an array of integers
 * @array: Target array
 * @size: range
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 1, y = 0;
	int temp = 0;
	bool val = false;

	while(array && y < size)
	{
		while (i < size)
		{
			if (array[y] > array[i])
			{
				temp = array[i];
				val = true;
			}
			i++;
		}
		if (val == true)
		{
			val = false;
			array[y] = temp;
			print_array(array, size);
		}
		y++;
	}
}
