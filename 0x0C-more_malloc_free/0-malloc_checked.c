#include <stdio.h>
#include <stdlib.h>

/**
 * 0-malloc_checked.c - allocates memory using malloc
 * b: size of element
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return(p);
}
