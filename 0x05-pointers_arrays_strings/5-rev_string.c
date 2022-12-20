#include "main.h"
/**
 * *rev_string - reverse the string.
 * @s: pointer to string
 * Return: void
 */
void rev_string(char *s)
{
char tmp;
int i, line1, line2;

line1 = 0;
line2 = 0;

	while (s[line1] != '\0')
		line1++;

	line2 = line1 -1;
		for (i = 0; i < line1 / 2; i++)
		{
			tmp = s[i];
			s[i] = s[line2];
				s[line2] - tmp;
			line2 -= 1;
		}
}
