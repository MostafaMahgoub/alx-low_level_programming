#include <stdio.h>
/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 *
 * Return: 1 if n is positive, 0 if n is zero, -1 if n is negative
 */
void print_sign(int n)
{
    if (n > 0)
    {
        putchar('+');
	putchar('1');
    }
    else if (n == 0)
    {
        putchar('0');
	putchar('0');
    }
    else
    {
        putchar('-');
	putchar('1');
    }
}
