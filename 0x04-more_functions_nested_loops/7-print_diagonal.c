#include<stdio.h>
/**
 * print_diagonal - entry point
 *
 * Description: Prints diagonals
 *@n: number of spaces
 * Return: void
 */

void print_diagonal(int n)
{
	int row, num_lines;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (row = 1; row <= n; row++)
		{
			if (row > 1)
			{
				for (num_lines = 1; num_lines <= row - 1; num_lines++)
				{
				putchar(' ');
				}
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
