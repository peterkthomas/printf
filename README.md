_printf

_printf - is a fucntion/command used in the C language to produce an output according to the specific output.

Symbols or flags for _printf

s - string
c - character
% - percentage
i - integer
d - decimal
holberton.h - holberton.h is our header file tha holds all of our specific prototypes for this directory and or repositroy.

Prototype: int _printf(const char *format, ...);

_putchar - this command writes a single character to stdout

prnt_str.c - prints a string

prnt_chr.c - prints a character

prnt_pct.c - prints a percent symbol

prnt_int.c - prints a an integer

locate_option - find the format specifier and invokes the proper function

printf.c - prints all characters passed to it

Examples:

String: _printf("%s\n", "Hello, Holberton") Output: Hello, Holberton

Char: _printf("%c\n", "A") Output: A

Dec: _printf("%d\n", "1000") Output: 1000

Int: _printf("%i\n", "24") Output: 24