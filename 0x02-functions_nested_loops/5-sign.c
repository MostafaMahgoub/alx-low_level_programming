#include<stdio.h>

/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 *
 * Return: 1 if n is positive, 0 if n is zero, -1 if n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		putchar('1');
		putchar('\n');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		putchar('1');
		return (-1);
	}
}
