/*
 * File: 100-print_comb3.c
 * Auth: JKawino
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *in ascending order, separated by a comma followed by a space.
 * Pattern recognition, everytime j hits 9, skip the next number
 * nth times
 * Return: Always 0.
 */

int main(void)
{
	int n = 0;

	int i;

	int j = 49;

	for (i = 48; i < 58; i++)
	{
		for (j = n + j; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if ((i != 56) || (j != 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
		j = 49;
		n++;
	}
	putchar('\n');
	return (0);
}
