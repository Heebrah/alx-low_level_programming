#include "main.h"
/**
 * print_square - prints a square of size size
 * @size: size of square
 * Return: void
 */
void print_square(int size)
{
	int a, j;

	if (size <= 0)
		_putchar('\n');

		for (a = 0; a < size; a++)
		{
			for (j = 0; j < (size); j++)
			{
			_putchar('#');
			}
			_putchar('\n');
	}
}
