/*
 * File: times_table
 * Auth: JKawino
 */

#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Returns 0
 *
 */

void times_table(void)
{
	int i;
    
	int n;

	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			if (n > 9)
			{
				putchar((n/10) + 48);
				putchar((n%10) + 48);
			}
			else
			{
				putchar(n + 48);
			}
			if (j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
