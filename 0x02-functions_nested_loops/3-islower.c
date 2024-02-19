/*
 * File: 3-islower.c
 * Auth: JKawino
 */

#include "main.h"

/**
 * _islower -  Checks for occurence of lowercase char
 *
 * Return 1 if an occurence.
 * Otherwise Return 0.
 */

int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
