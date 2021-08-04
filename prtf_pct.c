#include "holberton.h"

/**
 * prtf_pct - prints percent symbol
 * @data: data f rom printf function
 *
 * Return: Number of characters written.
 */
int prtf_pct(va_list data)
{
	va_end(data);
	
	return (_putchar('%'));
}
