#include <stdio.h>
#include "main.h"

/**
 * set_bit - changes a bit's value to 1 at a specified index
 * @n: Decimal value sent through a pointer
 * @index: index position to be modified, beginning at 0.
 * Return: 1 if it was successful, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;

	return (1);
}

