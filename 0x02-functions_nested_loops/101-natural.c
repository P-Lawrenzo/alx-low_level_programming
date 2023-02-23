#include <stdio.h>
/**
 * main - prints all the sum of the multiples 3 or 5 to 1024
 *
 * Return: Always 0
 */

int main(void)
{
	int i, j = 0;

	for (int i = 1; i < 1024; i++)
	{
	if (i % 3 == 0 || i % 5 == 0)
	{
	j += i;
	}
	}
	printf("%d\n", j);
	return (0);
}
