#include "main.h"
/**
 * print_rev - this function prints a reverse string
 *
 * @s: this is the input string
 * Return: 0
 */
void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++;

	for (i = (n - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
