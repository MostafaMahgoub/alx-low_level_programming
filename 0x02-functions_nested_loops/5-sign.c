#include <stdio.h>
/**
 * print_sign - returns 1 if n is +, - if n < 0 0 otherwise
 * @n: integer to be tested
 * Return: 1, -1 or 0
 */
void print_sign(int n)
{
	if (n > 0)
	{
		putchar("+1");
	}
	else if (n == 0)
	{
		printf("%d0\n", 0);
	}
	else
	{
		printf("%d\n", -1);
	}
}
