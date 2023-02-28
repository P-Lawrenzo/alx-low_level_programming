#include "main.h"
/**
 * _atoi -  converts a string to an integer.
 * @s: The pointer to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int digit;

	while (*s != '\0')
	{
	if (*s == '-')
	{
	sign = -sign;
	}
	else if (*s >= '0' && *s <= '9')
	{
	digit = *s - '0';
	result = result * 10 + sign * digit;
	}
	else if (result != 0)
	{
	break;
	}

	s++;
	}

	return (result);
}
