#include "main.h"

/**
 * print_alphabet - print all alpha in lower}
 *
 * Return : always 0
 */
void print_alphabet(void)
{
	int a;

	a = 97;
	while (a < 123)
	{
		_putchar(a);
		a++;
	}
	_putchar(10);
}
