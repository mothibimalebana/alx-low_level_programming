#include "main.h"
/**
 * puts2 - Function that prints every other character of a string.
 * @str: String.
 *
 * Return: void (nothing)
 */
void puts2(char *str)
{
	/**Initialise variables**/
	int i;

	/**Iterate through string**/
	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i  += 2; /**skip every other iteration**/
	}
	_putchar('\n');
}
