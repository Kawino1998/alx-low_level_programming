/*
 * File: 101-quote.c
 * Auth: JKawino
 */

#include <stdio.h>

/**
 * main - Prints a series of chars to stdoutput
 *
 * Return: Always 0.
 */

int main(void)
{
	int i = 0;

	char A[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	while (A[i] != '\0')
	{
		putchar(A[i]);
		i++;
	}
	putchar('\n');
	return (1);
}
