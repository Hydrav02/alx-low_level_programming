#include <stdio.h>

/**
 * main - Entry point
 * Description: print a code using write func
 * write (int fd,const void *buf,size_t count)
 * Return: 1 (fail)
 */


int main(void)
{	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fwrite(1, quo, 59);
	return (1);
}
