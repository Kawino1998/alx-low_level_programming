/*
 * File: 2-print_alphabet.c
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
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
