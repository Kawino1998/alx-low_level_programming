/*
 * File: 8-print_base16.c
 * Auth: JKawino
 */

#include <stdio.h>

/**
 * main - Prints hexadecimal numbers;
 *
 * Return: Always 0.
 */

int main(void)
{
	char letter = 'a';

	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

