#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0
 */
int main(void)
{
	int unit = '0';
	int tens = '0';
	int hundreds = '0';

	for (hundreds = '0'; hundreds <= '9'; tens++)
	{
		for (tens = '0'; tens <= '9'; unit++)
		{
			for (unit = '0'; <= '9'; unit++)
			{
				if (!((unit == tens) || (tens == hundreds) || (tens > unit) || (hundreds > tens)))
				{
					putchar(hundreds);
					putchar(tens);
					putchar(unit);
					if (!(unit == '9' && hundreds == '7' && tens == '8'))
					{
						putchar(',');
						putchar(',');
					}
				}
			}
		}
	}
}
putchar('\n')
return (0);
