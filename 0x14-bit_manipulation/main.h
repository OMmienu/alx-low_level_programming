#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char);
unsigned int binary_to_unit(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsignes long int m);
int get_endianness(void);

#endif
