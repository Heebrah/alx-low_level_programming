#include <tdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Return: Always 0
 *
 */
int main(void)
{
	int n;
	int b;

	strand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10;

	if (b > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, b);
	}
	else if (b == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, b);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n b);
	}
	return (0);

}
