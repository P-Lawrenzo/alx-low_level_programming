#include <stdio.h>
/**
 * main - print the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: nothing
 */

int main(void)
{
	int fibonacci[50];

	fibonacci[0] = 1;
	fibonacci[1] = 2;

	for (int i = 2; i < 50; i++)
	{
	fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}
	for (int i = 0; i < 49; i++)
	{
	printf("%d, ", fibonacci[i]);
	}
	printf("%d\n", fibonacci[49]);

	return (0);
}

