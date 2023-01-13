#include "main.h"
#include <stdio.h>
/**
 *_strcmp - compare two strings
 * @dest - parameter 1
 * @src - parameter 2
 * @n - parameter 3
 * Return: pointer
 */
int main(void)
{
	 int n;
	 int a[5];
	 int *p;

	 a[2] = 1024;
	 p = &n;
	 *(p + 5) = 98;
	 /* ...so that this prints 98\n */
	 printf("a[2] = %d\n", a[2]);
	 return (0);
}
