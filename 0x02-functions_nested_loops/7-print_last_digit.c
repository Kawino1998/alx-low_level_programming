/*
 * File: 7-print_last_digit.c
 * Auth: JKawino
 */

#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * Returns the value of the last digit
 *
 */

int print_last_digit(int i)
{
	int i = 0;

	if (i < 0)
	{
		i = -1 * i;
	}
	_putchar((i % 10) + 48)
}
