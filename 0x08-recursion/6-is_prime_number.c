#include "main.h"
int primeno(int n, int i);
/**
 * is_prime_number - executes prime_checker
 * @n: input to check
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (primeno(n, n / 2) > 0)
		return (1);
	return (0);
}
/**
 * primeno - checks for prime
 * @n: input to check
 * @i: n / 2, then passes to i - 1, checks if greater than 0
 * Return: primeno
 */
int primeno(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (primeno(n, i - 1));
		}
	}
}

