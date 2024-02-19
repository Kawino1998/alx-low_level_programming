/*
 * File: 2-print_alphabet_x10.c
 * Auth: JKawino
 */

#include "main.h"

/**
 * print_alphabet_x10 -  prints the alphabet, in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i;

	int k;

	for (i = 0; i <= 10; i++)
	{
		for (k = 97; k <= 122; k++)
		{
			_putchar(k);
		}
	}
	putchar('\n');
}
