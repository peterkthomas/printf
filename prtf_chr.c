#include "holberton.h"
/**
* prtf_chr - will print a character
*
* @data: va_list input
*
* Return: amount of characters printed
*/
int prtf_chr(va_list data)
{
	int c;

	c = va_arg(data, int);

	_putchar(c);
	return (1);

}
