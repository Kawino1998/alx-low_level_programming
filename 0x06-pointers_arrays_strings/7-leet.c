/**
 * Author: JKawino
 */

#include "main.h"

/**
 * leet - encodes a string in 1337
 * @z: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *z)
{
	int i;

	int j;

	int k = 0;


	char characters[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\n'};

	int numbers[] = {45, 13, 50, 18, 63, 31, 61, 29, 59, 27, 0};

	for (i = 0; characters[i] != '\0'; i++)
	{
		for (j = 0; z[j] != '\0'; j++)
		{
			if(z[j] == characters[i])
			{
				z[j] = z[j] - numbers[k];
			}
		}
		k++;
	}
	return z;
}
