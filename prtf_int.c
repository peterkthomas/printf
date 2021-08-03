#include "holberton.h"

/**
 *prtf_int - prints an integer
 *@data: data sent to printf
 *
 *Return: Number of characters printed
 */

int prtf_int(va_list data)
{
	int x;
	int divide = 1;
	int write = 0;

	x = va_arg(data, int);

	if (x < 0)
	{
		write += _putchar('-');
		x = -x;
	}

	while ((x / divide) > 9)
		divide *= 10;

	while (divide != 0)
	{
		write += _putchar((x / divide) + '0');
		x = x % divide;
		divide = divide / 10;
	}

	return (write);
}
