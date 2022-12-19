#include <stdio.h>
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: parameter of the function
 * Return: allow success
 */
int print_last_digit(int n)
{
	int a;

	a = -1 * (n % 10);
	if (n > 0)
	{
		putchar((n % 10) + '0');
		return (n % 10);
	}
	else
	{
		putchar(a + '0');
		return (a);
	}
}
