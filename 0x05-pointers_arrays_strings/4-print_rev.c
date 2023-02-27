#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse order followed by a new line
 *
 * @s: Pointer to string to be printed in reverse order
 * Return: void
 */
void print_rev(char *s)
{
	int i, len = 0;

	while (s[len] != '\0') /* Get length of string */
	len++;

	for (i = len - 1; i >= 0; i--) /* Print characters in reverse order */
	_putchar(s[i]);

	_putchar('\n'); /* Print newline character */
}
