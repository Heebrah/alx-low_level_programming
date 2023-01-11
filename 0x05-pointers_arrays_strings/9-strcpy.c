#include "main.h"
#include <stdio.h>
/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: character to check
 * @src: character to check
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int t;

	for (t = 0; src[t] != '\0'; t++)
		dest[t] = src[t];
	dest[t] = '\0';
	return (dest);
}
