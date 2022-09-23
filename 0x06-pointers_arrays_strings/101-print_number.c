#include "main.h"

/**
 * print_number - prototype
 * @n: integer
 */

void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	x = n;
	if (x / 10)
	{
		print_number(x / 10);
	}
	_putchar(x % 10 + '0');
}
