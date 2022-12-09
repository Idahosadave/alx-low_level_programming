#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0
 */
int main(void)
{
	int unit = '0';
	int tens = '0';
	int hundreds = '0';

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (unit = '0'; unit <= '9'; unit++)
			{
				if (!((unit == tens) || (tens == hundreds) ||
							(tens > unit) || (hundreds > tens)))/* eliminates repitition*/
				{
					putchar(hundreds);
					putchar(tens);
					putchar(unit);
					if (!(unit == '9' && hundreds == '7' &&
								tens == '8'))/* adds commas and space*/
					{
						putchar(',');
						putchar(',');
					}
				}
			}
		}
	}
	putchar('\n')
	return (0);
}
