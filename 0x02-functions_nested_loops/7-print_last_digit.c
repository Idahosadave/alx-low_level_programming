#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @num: number whose last digit is to be printed
 *
 * Return: return the last digit of @num
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	last_digit = last_digit < 0 ? -1 * last_digit : last_digit;
	_putchar(last_digit + '0');

	return (last_digit < 0 ? -1 * last_digit : last_digit);
}
