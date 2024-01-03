#include "main.h"
/**
 * _puts - Function that prints a string to stdout.
 * @str: Array of characters to write to stdout.
 *
 * Return: void.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
