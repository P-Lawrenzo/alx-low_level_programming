#include "main.h"
/**
 * _strncpy - Copies a string
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to be copied from src.
 *
 * Return: A pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}

	while (i < n)
	{
	dest[i++] = '\0';
	}

	return (dest);
}
