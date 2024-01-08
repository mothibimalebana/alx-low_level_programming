#include "main.h"
/**
 * print_rev - Function that prints a string in reverse.
 * @s: String to be printed in reverse.
 *
 * Return: void (nothing).
 */
void print_rev(char *s)
{
	/**Initialize variables**/
	int j;
	int i;

	/**Get length of string**/
	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}

	/**Iterate through string in reverse and print each iteration**/
	for (i = j; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	/**print newline**/
	_putchar('\n');
}
