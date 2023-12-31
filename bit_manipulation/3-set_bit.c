#include <stdio.h>
#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: a input value
 * @index: index of the code
 * Return: -1 if failed or output the correct numbers
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
	{
		return (-1);
	}
	else if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n ^= (1UL << index);
	return (1);
}
