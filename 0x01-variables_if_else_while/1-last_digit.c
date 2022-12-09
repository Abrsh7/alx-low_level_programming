#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main- serves as the entry point to the program
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is", n);
	m = n % 10;
	if (m > 5)
	{
		printf("%d and is greater than 5\n", m);
	}
	else if (m == 0)
	{
		printf("%d and is 0\n", m);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", m);
	}
	return (0);
}
