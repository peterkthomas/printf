#include "holberton.h"
/**
 * _printf - prints all characters passed to it
 * @format: all arguments passed
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	char character;
	int write = 0;
	int check;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (format[i])
		i++;

	if (!i)
		return (0);
	i = 0;
	while (*(format + i))
	{
		if (*(format + i) != '%')
		{
			character = format[i];
			write += _putchar(character);
		}
		else
		{
			check = locate_option(args, format, i);

			if (check != -1)
			{
				write += check;
				i++;
			} else
				return (-1);
		}
		i++;
	}
	va_end(args);
	return (write);
}
