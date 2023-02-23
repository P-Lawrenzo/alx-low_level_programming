#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number of times to print the times table.
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	return;

	for (i = 0; i <= n; i++)
	{
	for (j = 0; j <= n; j++)
	{
	int product = i * j;

	if (j == 0)
	{
	printf("%d", product);
	}
	else
	{
	printf(", %3d", product);
	}
	}
	printf("\n");
	}
}

