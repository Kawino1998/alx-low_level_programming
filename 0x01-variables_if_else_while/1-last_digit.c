/*
 * File: 1-last_digit.c
 * Auth: JKawino
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Checks the last digit of a number
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 == 0)
	{
		printf("Last digit of %d is 0 and is 0", n);
	}
	else if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, n % 10);
	}
	else if (n % 10 < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, n % 10);
	}
	putchar('\n');
	return (0);
}
