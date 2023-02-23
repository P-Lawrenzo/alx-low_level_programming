#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci nums from 1 and 2
 * Return: Always o
 */

int main(void)
{
	int a = 1, b = 2, c;
	int count = 1;

	printf("%d, %d", a, b);
	count += 2;
	while (count < 99)
	{
	c = a + b;
	printf(", %d", c);
	a = b;
	b = c;
	count++;
	}
	printf("\n");
	return (0);
}
