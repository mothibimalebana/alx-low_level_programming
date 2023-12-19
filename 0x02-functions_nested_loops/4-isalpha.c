#include "main.h"
/**
 * _isalpha - Determines if character is part of alphabet(lower or upper).
 * @c: Character to be evaluated.
 *
 * Return: Returns 1 if true and return 0 if false.
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
