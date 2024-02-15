/*
 * File: 9-print_comb.c
 * Auth: JKawino
 */

#include <stdio.h>

/**
 * main - Prints digits from 0 to 9
 *
 * Return: Always 0.
 */

int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		if (n < 57)
		{
			putchar(44);
			putchar(32);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
