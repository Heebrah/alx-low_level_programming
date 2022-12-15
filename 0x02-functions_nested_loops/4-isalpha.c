#include "main.h"
/**
 * _isalpha - function that checks for alphabet
 * @c: parameter
 * Return: allow success
 */
int _isalpha(int c)
{
	if ((c = 'A' && c <= 'Z') || (c = 'a' && c <= 'z'))
		return (1);

	else
		return (0);
}
