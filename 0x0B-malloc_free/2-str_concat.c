#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	int size_of_s1, size_of_s2, i, j;

	char *ptr;

	for (size_of_s1 = 0; s1[size_of_s1] != '\0'; size_of_s1++)
	{
		;
	}
	for (size_of_s2 = 0; s2[size_of_s2] != '\0'; size_of_s2++)
	{
		;
	}
	ptr = (char *)malloc((sizeof(char) * (size_of_s1 + size_of_s2 + 1)));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (size_of_s1 + size_of_s2); i++)
	{
		if (s1[i] != '\0')
		{
			ptr[i] = s1[i];
			continue;
		}

		j = i;
		for (i = 0; i < size_of_s2; i++)
		{
			ptr[j++] = s2[i];
		}
		break;
	}
	ptr[size_of_s1 + size_of_s2] = '\0';
	return (ptr);
}
