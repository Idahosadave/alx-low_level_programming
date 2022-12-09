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

	for (tens = '0'; tens <= '9'; tens++)/* prints tents digits*/
	{
		for (unit = '0'; unit <= '9'; unit++)/* prints unit digit*/
		{
			if (!((unit == tens) || (tens > unit)))/* eliminates repitition*/
			{
				putchar(tens);
				putchar(unit);
				if (!(unit == '9' && tens == '&'))/* adds comma and spaces*/
				{
					putchar(',');
					putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
