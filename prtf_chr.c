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
	char c;

	c = va_arg(data, int);

	write(1, &c, 1);
	return (1);

}
