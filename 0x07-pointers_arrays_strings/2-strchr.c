#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *p;

    
	int i;
    
	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			p = &s[i];
            		return (p);
            		break;
		}
	}
	return (NULL);
}
