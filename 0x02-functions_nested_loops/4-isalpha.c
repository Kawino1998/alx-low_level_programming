/*
 * File: 4-isalpha.c
 * Auth: JKawino
 */

#include "main.h"

/**
 * _isalpha -  Checks for occurence of Alphabet
 *@c : the character to be evaluated
 * Return 1 if c is alpha.
 * Otherwise Return 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
