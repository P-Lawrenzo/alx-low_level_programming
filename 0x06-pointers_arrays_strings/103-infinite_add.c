#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result, or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, lenr = 0;
	int i, j, k, carry = 0, sum = 0;

	while (n1[len1])
	len1++;
	while (n2[len2])
	len2++;

	if (len1 > size_r - 1 || len2 > size_r - 1)

		return (0);

	i = len1 - 1;
	j = len2 - 1;
	k = size_r - 1;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		carry = sum / 10;
		r[k] = sum % 10 + '0';
		i--;
		j--;
		k--;
		lenr++;
	}
	for (i = 0; i < lenr / 2;
			i++)
	{
	char tmp = r[i];

	r[i] = r[lenr - i - 1];

	r[lenr - i - 1] = tmp;
	}

	r[lenr] = '\0';

	return (r);
}
