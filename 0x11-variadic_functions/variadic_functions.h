#ifndef VARIADICFUNCTIONS_H
#define VARIADICFUNCTIONS_H
#include <stdarg.h>
/**
 * struct ops - Struct op
 * @c: The char
 * @f: The function associated
 */
typedef struct ops
{
char c;
void (*f)(va_list ap);
} op_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void (*getOps(char s))(va_list);
void print_c(va_list arg);
void print_i(va_list arg);
void print_f(va_list arg);
void print_s(va_list arg);
#endif
