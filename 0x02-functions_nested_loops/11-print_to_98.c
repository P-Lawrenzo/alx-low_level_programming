#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural num from n to 98
 * @n: The num to start printing from
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
	for (i = n; i < 98; i++)
	{
	printf("%d, ", i);
	}
	}
	else
	{
	for (i = n; i > 98; i--)
	{
	printf("%d, ", i);
	}
	}
	printf("%d\n", 98);
}
