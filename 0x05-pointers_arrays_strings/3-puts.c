#include "main.h"
/**
 * puts - Function that prints a string to stdout.
 * @str: Array of characters to write to stdout.
 *
 * Return: void.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str++; )
		_putchar(str[i]);
	_putchar('\n');
}
