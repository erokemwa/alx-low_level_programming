#include "search_algos.h"

/**
 * print_arr - print array everytime array is halved
 * @array: array
 * @left: left index of array
 * @right: right index of array
 */
void print_arr(int *array, size_t left, size_t right)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i != right)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

/**
 * binary_search - search mids
 * @array: given array of ints
 * @size: size of array
 * @value: value to search for
 * Return: index at which value's found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid = 0;
	size_t left = 0;
	size_t right = size - 1;

	if (!array || size <= 0)
		return (-1);

	while (left <= right)
	{
		print_arr(array, left, right);

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
