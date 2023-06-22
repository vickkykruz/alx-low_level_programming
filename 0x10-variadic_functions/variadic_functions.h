#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

/** Include library stdarg.h **/
#include <stdarg.h>

/** Prototypes **/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
