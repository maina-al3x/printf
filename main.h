#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);

/**
 * struct types - struct
 *
 * @c: data type
 * @f: the function associated
 */

typedef struct types
{
  char c;
  int (*f)(va_list);
} types;



#endif
