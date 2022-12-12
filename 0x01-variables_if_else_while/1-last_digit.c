#include <stdio.h>
#include <stdlib.h>

#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int number;
srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (number > 0)
	{
		printf("%d is positiv\n", number);
	}
		else if (number = 0)
	{
		printf("%d is zero\n", number);
	}
				else
	{
		printf("%d is negative\n", number);
	}
			return (0);

}
