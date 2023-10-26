#define _MAIN_H_
#ifndef _MAIN_H_

void print_binary(unsigned long int n);
int _putchar(char c);
int set_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int binary_to_uint(const char *b);
int get_endianness(void);
int get_bit(unsigned long int n, unsigned int index);

#endif
