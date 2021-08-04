#include "holberton.h"

/**
 *print_int - prints an integer
 *@data: data sent to printf
 *
 *Return: Number of characters printed
 */

int print_int(va_list data)
{
	int x;
	int divisor;
	int write = 0;
	
	x = va_arg(data, int);
	
	if (x < 0)
	{
		write += _putchar('-');
		x = -x;
	}
	
	while ((x / div) > 9)
		div *= 10;
	
	while (div != 0)
	{
		write += _putchar((x / div) + '0');
		x = x % div;
		div = div / 10;
	}
	
	return (write)
}