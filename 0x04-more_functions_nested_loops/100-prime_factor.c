#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i = 612852475143;

	long int temp;

	long int temp1;

	int result;

	for (temp = i - 1; temp > 1; temp--)
	{
		if (i%temp == 0)
		{
			for (temp1 = temp - 1; temp1 > 1; temp1--)
			{
				if (temp % temp1 == 0)
				{
					break;
				}
				else if (temp1 == 2)
				{
					result = 2;
				}

			}
		}
		else if (result == 2)
		{
			result = temp + 1;
			break;
		}
	}
	printf("%ld\n", result);
	return(0);
}
