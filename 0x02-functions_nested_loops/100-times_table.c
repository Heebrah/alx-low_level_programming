#include "main.h"
/**
 * print_times_table - Prints the times table of the input,
 * starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
	int num, M, P;
	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (M = 1; M <= n; M++)
			{
				_putchar(',');
				_putchar(',');
				P = num * M;
				if (P <= 99)
					_putchar(' ');
				if (P <= 9)
					_putchar(' ');
				if (P >= 100)
				{
					_putchar((P / 100) + '0');
					_putchar((P / 10) % 10 + '0');
				}
				else if (P <= 99 && P >= 10)
				{
					_putchar((P / 10) + '0');
				}
				_putchar((P % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
