#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: the string to be ecncoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str);
{
	int i, j;

	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',
									'G', 'H', 'I', 'J', 'K', 'L',
									'M', 'N', 'O', 'P', 'Q', 'R',
									'S', 'T', 'U', 'V', 'W', 'X',
									'Y', 'Z', 'a', 'b', 'c', 'd',
									'e', 'f', 'g', 'h', 'i', 'j',
									'k', 'l', 'm', 'n', 'o', 'p',
									'q', 'r', 's', 't', 'u', 'v',
									'w', 'x', 'y', 'z' };
	char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
									'T', 'U', 'V', 'W', 'X', 'Y',
									'Z', 'A', 'B', 'C', 'D', 'E',
									'F', 'G', 'H', 'I', 'J', 'K',
									'L', 'M', 'n', 'o', 'p', 'q',
									'r', 's', 't', 'u', 'v', 'w',
									'x', 'y', 'z', 'a', 'b', 'c',
									'd', 'e', 'f', 'g', 'h', 'i',
									'j', 'k', 'l', 'm' };
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (alpha[j] != '\0')
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
