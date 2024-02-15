/*
 * File: 3-print_alphabets.c
 * Auth: JKawino
 */

#include <stdio.h>

/**
 * main - Prints alphabet in lower an uppercase
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter = 'a';

	char upper = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
