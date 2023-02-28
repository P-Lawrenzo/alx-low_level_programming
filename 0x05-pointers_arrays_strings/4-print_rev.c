#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed in reverse
 */
void print_rev(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	len++;

	for (i = len - 1; i >= 0; i--)
	{
	putchar(*(s + i));
	}
	putchar('\n');
}
