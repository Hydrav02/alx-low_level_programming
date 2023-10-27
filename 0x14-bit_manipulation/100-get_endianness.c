#include "main.h"

/**
 * get_endianness - Verify endianness
 * Return: 1 if the endian is small, or 0 if it is big
 */
int get_endianness(void)
{
	int num;

	num = 1;
	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}
