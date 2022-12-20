#include "main.h"
/**
 * _puts - function that prints a string with new line
 * @str: input string
 * Return: always successful
 */
void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');

