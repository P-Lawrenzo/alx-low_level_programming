#include <stdio.h>
/**
 * main -  prints a[2] = 98, followed by a new line.
 * @a: integer
 * Return: 0
 */
int main(int a)
{
	int a[] = {42, 1337, 98, 7};
	int *p = a;

	printf("a[2] = %d\n", *(p + 2));

	return (0);
}
