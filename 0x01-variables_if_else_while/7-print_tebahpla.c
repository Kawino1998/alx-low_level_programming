/*
 * File: 
 * Auth: JKawino
 */

#include <stdio.h>

/**
 * main - Prints alphabet in lower case
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
