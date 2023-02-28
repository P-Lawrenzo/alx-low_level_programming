#include "main.h"
#include <string.h>

/**
 * puts_half - prints the second half of a string
 * @str: the string to print
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int start = (len % 2 == 0) ? (len / 2) : ((len + 1) / 2);

	for (i = start; i < len; i++)
	{
	putchar(str[i]);
	}
	putchar('\n');
}
