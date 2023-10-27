#include "main.h"
#include <stdio.h>

/**
 * clear_bit - set a bit's value to 0 at a specified index
 * @n: a pointer to the desired decimal number
 * @index: the index position will shift
 * Return: 1 if it was successful, -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int hold;

	if (index > 64)
		return (-1);
	hold = index;
	for (i = 1; hold > 0; i *= 2, hold--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
