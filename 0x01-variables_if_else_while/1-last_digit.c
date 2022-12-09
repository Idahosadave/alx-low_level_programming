#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_max / 2;
	printf("Last digit of %d is ", n);
	m = n % 10;
	if (m > 6)
	{
		printf("%d and is greater than 5\n", m);
	}
	else if ((m < 6) && (m < 0))
	{
		printf("%d and is less than 6 and not 0\n", m);
	}
	else
	{
		print("%d and is 0\n", m)
	}
	return (0);
}
