#include "holberton.h"

/**
 * prtf_str - prints a string
 * @data: data to print
 *
 * Return: number of characters written
 */

int prtf_str(va-list data)

int i;
int format = 0;
unsigned int size;
char str;
int length = 0;
int j;

char str = va-arg(data, char*)

for (i = 0; str[i] != '\0'; i++)
{
    length++;
}

size = length;

for(unsigned int j = 0; j < size; j++)
{
    format[j] = str[i];

    _putchar(format[j]);
}

return(format);
