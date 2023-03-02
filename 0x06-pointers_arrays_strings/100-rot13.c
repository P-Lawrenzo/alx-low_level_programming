#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @s: string to be encode
 * Return: p
 */

char *rot13(char *s)
{
	char *p = s;
	int i;

	for (i = 0; s[i]; i++)
	{
	if (s[i] >= 'a' && s[i] <= 'z')
	{
	s[i] -= 'a';
	s[i] = ((s[i] + 13) % 26) + 'a';
	}
	else if (s[i] >= 'A' && s[i] <= 'Z')
	{
	s[i] -= 'A';
	s[i] = ((s[i] + 13) % 26) + 'A';
	}
	}

	return (p);
}
