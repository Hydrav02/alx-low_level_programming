#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to change a number from one to another
 * @n: first digit
 * @m: second figure to translate to
 * Return: the quantity of bits required to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
