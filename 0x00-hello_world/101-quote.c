#include <stdio.h>
/**
* main - A program that prints a line to the standard error
*Return: (1) Success
*/
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	
	fwrite(2, quote, sizeof(quote) - 1);

	return (1);
}
