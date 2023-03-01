#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: find length
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
	{
	dest++;
	}

	while (*src)
	{
	*dest++ = *src++;
	}

	*dest = '\0';

	return (temp);
}
