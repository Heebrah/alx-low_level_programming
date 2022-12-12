#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints alpha in lower case
 * Return: Always 0
 */
int main(void)
{
	char hv;

	for (hv = 'a'; hv <= 'z'; hv++)
{
		putchar(hv);
}
	putchar('\n');
	return (0);
}
