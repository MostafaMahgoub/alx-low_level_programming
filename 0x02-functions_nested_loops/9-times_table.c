#include <stdio.h>
/**
 * times_table - prints times table
 */
void times_table(void)
{
	int i, j, prod;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				putchar(48);
				continue;
			}
			prod = i * j;
			putchar(',');
			putchar(' ');
			if (prod >= 10)
			{
				putchar(prod / 10 + 48);
				putchar(prod % 10 + 48);
			}
			else
			{
				putchar(' ');
				putchar(prod + 48);
			}
		}
	putchar('\n');
	}
}
