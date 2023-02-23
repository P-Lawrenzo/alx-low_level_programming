#include "main.h"
#include <stdio.h>
/**
 * main - Computer & prints the sum of multiples 3 or 5.
 * @sum: multiple below 1024 excluded
 * Return: Always 0
 */

int main(int sum)
{
	for (int i = 1; i < 1024; i++)
	{
	if (i % 3 == 0 || i % 5 == 0)
	{
	sum += i;
	}
	}
	printf("%d\n", sum);
	return (0);
}
