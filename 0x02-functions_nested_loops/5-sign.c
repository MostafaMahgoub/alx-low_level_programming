#include <stdio.h>
/**
 * print_sign - returns 1 if n is +, - if n < 0 0 otherwise
 * @n: integer to be tested
 * Return: 1, -1 or 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+1');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-1');
		return (-1);
	}
}
