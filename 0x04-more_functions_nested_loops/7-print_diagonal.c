#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line
 * @n: number of times
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (j = 0; j < n; j++)
	{

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
}
