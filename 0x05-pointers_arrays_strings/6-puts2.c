#include "main.h"
/**
 * puts2 - Function that prints every other character of a string.
 * @str: String.
 *
 * Return: void (nothing)
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i != '\0'; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
