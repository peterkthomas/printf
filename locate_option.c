#include "holberton.h"

/**
 * locate_option - find the option and refer to function
 * @args: argument to check
 * @format: pointer to position in arguments
 * @cursor: index
 *
 * Return: NULL, function address, or option
 */

int locate_option(va_list args, const char *format, int cursor)
{
	int i;
	char option;
	
	pf settings[] = {
		{"%", prtf_pct},
		{"s", prtf_str},
		{"c", prtf_chr},
		{"d", prtf_int},
		{"i", prtf_int},
	};
	
	if (!format)
		return (NULL);
	
	option = format[cursor + 1];
	
	if (!option)
		return (-1);
	
	if (format[cursor] == '%' && option == '\n')
		return (_putchar('%') + _putchar(option));
	
	for (i = 0; i < 5; i++)
	{
		if (option == settings[i].format[0])
			return (settings[i].p(args));
		
	}
	
	return (_putchar(format[cursor]) + _putchar(option));
}
