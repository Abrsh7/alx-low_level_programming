#include <stdio.h>
/**
 * main- Entry point
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	int n;

	for (n = 0; n < 16; n++)
	{
		if (n < 10)
		{
			putchar(n + '0');
		}
	else
	{
		putchar(c);
		c++;
	}
	}
	putchar('\n');
	return (0);
}
