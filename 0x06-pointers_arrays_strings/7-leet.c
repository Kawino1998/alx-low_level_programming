/**
 * Author: JKawino
 */

#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int i;

	int j;

	int k = 0;


	char characters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\n'};

	int numbers[] = {45, 13, 50, 18, 63, 31, 61, 29, 59, 27, 0};

	for (i = 0; characters[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == characters[i])
			{
				s[j] = s[j] - numbers[k];
			}
		}
		k++;
	}
	return (s);
}
