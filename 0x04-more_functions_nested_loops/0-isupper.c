#include "main.h"
/**
 * _isupper - Function that checks for uppercase character.
 * @c: Char will be converted to value when put between  inverted commas.
 *
 * Return: Return 1 if true and return 0 if false.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
