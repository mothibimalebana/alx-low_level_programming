#include "main.h"
/**
 * print_rev - Function that prints a string in reverse.
 * @s: String to be printed in reverse.
 *
 * Return: void (nothing).
 */
void print_rev(char *s)
{
	int i;
	unsigned int j;
	int len;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	j = len + 1;

	while (--j)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
