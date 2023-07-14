#include <stdio.h>

/**
 * main - entry pont
 *
 * Description: print all alphabet letters
 *
 * Return: 0 (success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
