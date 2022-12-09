#include <stdio.h>

/**
 * main - printing all combination of a single digit
 * Return: Always 0
 */
int main(void)
	{
	int a;

	for (a = 0; a < 58; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
