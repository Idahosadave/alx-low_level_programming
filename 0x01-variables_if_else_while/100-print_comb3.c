#include <stdio.h>

/**
 * main - printing all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int unit = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)
	{
		for (unit = '0'; unit <= '9'; unit++)
		{
			if (!((unit == tens) || (tens > unit)))
			{
				putchar(tens);
				putchar(unit);
				if (!(unit == '9' && tens == '&'))
				{
					putchar(',');
					putchar(',');
				}
			}
		}
	}
}

putchar('\n');

return (0);
