#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 *
 * Return: Always 0
 */
int main(void)
{
	int c;
	int d = 0;

	while (d < 10)/*print tens digits*/
	{
		c = 0;
		while (c < 10)/* prints unit for ones*/
		{
			if (d != c && d < c)/*prints hundreds*/
			{
				purchar('0' + d);
				putchar('0' + c);

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
