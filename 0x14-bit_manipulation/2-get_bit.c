#include "main.h"

/**
 * get_bit - it does returns value of the bit at an index in a decimal number
 * @n: number to be searched
 * @index: index of the bit declared
 * Return: value of the bit mentioned
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

