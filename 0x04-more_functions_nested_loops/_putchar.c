#include "main.h"
#include <unistd.h>
/**
 * _putchar - write  the character c to stdout
 * @c: The character to print
 *
 * Return: on sucess, the num of characters written.
 * on error, -1 is returned and error is set appropriately
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
