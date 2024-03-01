/**
 * Author: Jkawino
 * File: 5-rev_string.c
 */

#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
        int i; int tmp;

        int j = _strlen(s) - 1;

        for (i = 0; i < _strlen(s) / 2; i++)
        {
            tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
            j--;
        }
}
