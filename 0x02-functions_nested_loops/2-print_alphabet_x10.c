#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in 10 loops
 * Return : always (0) success
 */
void print_alphabet_x10(void)
{
	char lc = 'a';
	int ten;

	for (ten = 1; ten <= 10; ten++)
	{
	while (lc <= 'z')
	{
		_putchar(lc++);
	}
	lc = 'a';
		_putchar ('\n');
	}
}
