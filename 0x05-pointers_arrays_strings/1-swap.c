#include "main.h"
/**
 * swap_int - A function that swaps the values of two integers.
 * @a: first value of integer
 * @b: second value of integer
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
