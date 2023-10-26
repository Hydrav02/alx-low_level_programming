#include "main.h"
#include <stdio.h>

/**
 * get_bit - get a value of a bit at the given index by user
 * @n: the number to be evaluated
 * @index: index of the bit we want to obtain, starting at 0
 * Return: Bit value or -1 in the event of an error at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
