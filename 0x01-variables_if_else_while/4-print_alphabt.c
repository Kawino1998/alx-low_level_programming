/*
 * File: 4-print_alphabt.c
 * Auth: JKawino
 */

#include <stdio.h>

/**
 * main - Prints alphabet in lower case exclude e and q
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q' || letter == 'e')
		{
			letter++;
			continue;
		}
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
