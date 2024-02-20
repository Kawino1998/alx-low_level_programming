/*
 * File: 7-print_last_digit.c
 * Auth: JKawino
 */

#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *@i: digit to find the last place of
 * Returns the value of the last digit
 *
 */

int print_last_digit(int i)
{
	if (i < 0)
	{
		i = -1 * i;
	}
	_putchar((i % 10) + 48);
	return (i % 10);
}
