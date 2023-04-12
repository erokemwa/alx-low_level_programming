#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to 1st element of the array
 * @size: No. of elements in array
 * @value: value to search
 *
 * Return: 1st index where value is located or -1 on NULL
 *             array input or if value is absent
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	i = 0;
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
