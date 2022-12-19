#include "main.h"

/**
 * _puts - prints a string
 * @str: strings to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putschar(*str++);
	}
	_putchar('\n');
}
