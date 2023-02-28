#include "main.h"
/**
 * rev_string - A function that reverses a string.
 * @s: check for null pointer
 */

void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0, j = 0; s[j + 1]; j++)
	;

	while (i < j)
	{
	temp = s[i];
	s[i++] = s[j];
	s[j--] = temp;
	}
}
