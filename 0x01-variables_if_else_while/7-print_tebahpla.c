#include <stdio.h>

/**
 * main - print the alphabets in reverse
 * Return: Always 0
 */
int main(void)
{
	char sl;

	for (sl = 'z'; sl >= 'a'; sl--)
		putchar(sl);

			putchar('\n');

	return (0);
}
