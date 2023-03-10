#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer to store result
 * @size_r: size of buffer
 *
 * Return: pointer to the result, or 0 if buffer too small
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int i, j, k;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
	return (0);

	for (i = len1 - 1, j = len2 - 1, k = 0; i >= 0 || j >= 0 || carry;
			i--, j--, k++)
	{
	int digit1 = i >= 0 ? n1[i] - '0' : 0;
	int digit2 = j >= 0 ? n2[j] - '0' : 0;
	int sum = digit1 + digit2 + carry;

	carry = sum / 10;
	r[k] = (sum % 10) + '0';
	}
	r[k] = '\0';

	for (i = 0, j = k - 1; i < j; i++, j--)
	{
	char temp = r[i];

	r[i] = r[j];
	r[j] = temp;
	}

	return (r);
}

