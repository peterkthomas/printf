#include "holberton.h"

/**
 * prtf_str - prints a string
 * @data: data to print
 *
 * Return: number of characters written
 */

int prtf_str(va_list data)
{

	char *str;
	int i;
	int length = 0;

	str = va_arg(data, char*);

	if (!str)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		length += _putchar(str[i]);
	}
	
	va_end(data);

	return(length);
}
