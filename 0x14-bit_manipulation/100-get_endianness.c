#include "main.h"

/**
 * get_endianness - It checks if the machine is little or big endian
 * Return: Return 0 for big, and 1 for little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
