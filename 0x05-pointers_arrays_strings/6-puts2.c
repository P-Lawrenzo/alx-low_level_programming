#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * character, followed by a new line.
 * @str: the string to print.
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
	putchar(str[i]);
	i += 2;
	}
	putchar('\n');
}