#include "main.h"
/**
 * swap_int - function that swaps two integers value
 * @a: first parameter
 * @b: second parameter
 * Return - always 0
 */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
