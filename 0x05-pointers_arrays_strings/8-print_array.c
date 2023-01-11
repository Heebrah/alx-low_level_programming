#include "main.h"
/**
 * print_array - an array of integers
 * @n: no of the array
 * @a: int to check
 * Return: void
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0); x < n; x++)
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	printf("\n");
}
