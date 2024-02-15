/*
 * File: 5-print_numbers.c
 * Auth: JKawino
 */

#include <stdio.h>

/**
 * main - Prints digits from 0 to 10
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
