#include "sort.h"
#include <stdbool.h>

/**
 * selection_sort - sorts an array of integers
 * @array: Target array
 * @size: range
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, y = 0, x = 0;
	int temp = 0, ival = 0;
	bool val = false;

	while (array && y < size)
	{
		i = y + 1;
		val = false;
		while (i < size)
		{
			if (array[y] > array[i])
			{
				ival = array[i];
				x = i;
				val = true;
			}
			i++;
		}

		if (val == true)
		{
			temp = array[y];
			array[y] = ival;
			array[x] = temp;

			print_array(array, size);
		}
		y++;
	}
}
