#include "main.h"
/**
 * puts_half - Function that prints half of a string.
 * @str: String to be cut in half.
 *
 * Return: void (nothing).
 */
void puts_half(char *str)
{
	/**Initialize variables**/
	int i;
	int j;
	int n;

	/**Get length of string**/
	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}

	n = (j - 1) / 2;
	if (n % 2 == 0)
	{
		for (i = n + 1; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}

