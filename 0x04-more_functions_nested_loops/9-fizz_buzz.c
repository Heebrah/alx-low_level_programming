#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Description: prints the number 1 - 100 w/
 * fizz mult(3), buzz mult(5),fizzbuzz for mult of both
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
		printf("Fizz");
		else if
			(i % 5 == 0)
				printf("Buzz");
		else if
			(i % 15 == 0)
				printf("FizzBuzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
