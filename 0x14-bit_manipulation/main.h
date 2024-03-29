#ifndef BIT_MANIPULATION
#define BIT_MANIPULATION

/** Include libary stddef **/
#include <stddef.h>

/** Prototype **/
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/* Advance tasks */
int get_endianness(void);
#endif
