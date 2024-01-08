#include "main.h"
/**
 * rev_string - Function that reverses a string.
 * @s: String to be reversed.
 *
 * Return: void (nothing).
 */
void rev_string(char *s)
{
	/**Initialise variables**/
	int i;
	int j;

	/**Get length of string**/
	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}

	/**Print a newline**/
	_putchar('\n');

	/**Iterate through string in reverse**/
	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]); /**Print string element**/
	}
}
