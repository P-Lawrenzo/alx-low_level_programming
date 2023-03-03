#include <stdio.h>
#include <ctype.h>
/**
 * print_buffer -  prints a buffer.
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i;
	int j;

	if (size <= 0)
	{
	printf("\n");
	return;
	}

	for (i = 0; i < size; i += 10)
	{
	printf("%08x: ", i);
	for (j = 0; j < 10; j++)
	{
	if (i + j < size)
	{
	printf("%02x", b[i + j]);
	}
	else
	{
	printf("  ");
	}
	if (j % 2 == 1)
	{
	printf(" ");
	}
	}
	for (j = 0; j < 10; j++)
	{
	if (i + j < size)
	{
	char c = isprint(b[i + j]) ? b[i + j] :
		'.';
	printf("%c", c);
	}
	else
	{
	printf(" ");
	}
	}
	printf("\n");
	}
}
