#include <stdio.h>
/**
 * print_sign - returns 1 if n is +, - if n < 0 0 otherwise
 * @n: integer to be tested
 * Return: 1, -1 or 0
 */
void print_sign(void)
{
	int n;

	if (n > 0)
	{
		printf("+%d\n", 1);
	}
	else if (n == 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		printf("%d\n", -1);
	}
}
