#include <stdio.h>
/**
 * main - entry point
 * Return: always success
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 8; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				for (d = 0; d <= 9; d++)
				{
if (!(a == c && b == d) || !(a == b && a == c &&
a == d && b == c && b == d && d == c))
				{
				       	putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					putchar(d + '0');
				 if (!(a == 9 && b == 8 && c == 9))
					 {
						 putchar(',');
						 putchar(' ');
					 }
				}
				}
			}
		}
	}
}