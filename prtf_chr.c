#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
/**
* prtf_chr - will print a character
*
* @data: va_list input
*
* Return: 0 if successful
*/
int prtf_chr(va_list data)
{
	char c;
	int f = 0;

	c = va_arg(data, int);

	write(1, &c, 1);
	return (1);

}
