/*
 * File: 1-alphabet.c
 * Auth: JKawino
 */

#include "main.h"

/**
 * print_alphabet -  prints the alphabet, in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
