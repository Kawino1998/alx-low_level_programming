#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	int size, i;

	char *ptr;

	for (size = 0; str[size] != '\0'; size++)
	{
		;
	}

	ptr = (char *)malloc((sizeof(char) * size) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	ptr[size] = '\0';
	return (ptr);
}
