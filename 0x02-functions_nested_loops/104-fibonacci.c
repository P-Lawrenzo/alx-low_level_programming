#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci nums from 1 and 2
 * Return: Always o
 */

int main(void)
{
	int first = 1;
	int second = 2;
	int next;

	printf("%d, %d, ", first, second);

	for (int i = 3; i <= 98; i++)
	{
	next = first + second;
	first = second;
	second = next;
	printf("%d", next);

	if (i != 98)
	{
	printf(", ");
	}
	}

	printf("\n");
	return (0);
}
