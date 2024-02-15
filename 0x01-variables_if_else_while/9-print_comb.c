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
	int i = 48;

	while (i <= 57)
	{
		if (i == 57)
		{
			putchar(i);
			break;
		}
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	}
	return (0);
}
