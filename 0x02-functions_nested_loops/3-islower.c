#include "main.h"
/**
 * _islower - A function that checks for lowercase character.
 * @c: character to be evaluated.
 *
 * Return: 1 if lowercase and 0 if uppercase.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
