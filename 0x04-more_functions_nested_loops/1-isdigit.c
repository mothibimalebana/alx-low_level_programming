#include "main.h"
/**
 * _isdigit - Function that checks for a digit (0 through 9).
 * @c: Value to be checked if its a digit.
 *
 * Return: 1 if c is a digit and 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
