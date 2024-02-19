/*
 * File: 6-abs.c
 * Auth: JKawino
 */

#include "main.h"

/**
* int _abs - Returns the absolute value of int
*
*Return: abs value of int
*/

int _abs(int i)
{

	if (i < 0)
	{
		i = i * -1;
	}
	return (i);
}
