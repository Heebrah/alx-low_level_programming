#include "main.h"
/**
 * print_rev - this function prints a reverse string
 *
 * @s: this is the input string
 */
void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\n')
		n++;
	for (i = n-1; i >= 0; i--)
		{
			_putchar(s[i]);
		}
	_putchar('\n');
}
