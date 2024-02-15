/*
 * File: 7-print_tebahpla.c
 * Auth: JKawino
 */

#include <stdio.h>

/**
 * main - Prints alphabet in lower case in reverse
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
