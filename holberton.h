#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct options - structure
 * @format:  pointer to format
 * @p: pointer to va_list item
 */
struct print_format
{
	char *format;
	int (*p)(va_list data);
};
typedef struct print_format pf;

int _printf(const char *format, ...);
int _putchar(char c);
int locate_option(va_list args, const char *format, int cursor);
int prtf_pct(va_list data);
int prtf_str(va_list data);
int prtf_chr(va_list data);
int prtf_int(va_list data);

#endif
