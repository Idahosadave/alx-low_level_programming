#include <<stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
(void) argv;/*ignore argv*/
printf("%d\n", argc - 1);

return (0);
}
