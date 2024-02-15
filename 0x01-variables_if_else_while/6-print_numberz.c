/*
 * File: 6-print_numberz.c
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
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return(0);
}
