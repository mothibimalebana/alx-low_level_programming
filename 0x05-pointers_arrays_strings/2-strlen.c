#include "main.h"
/**
 * _strlen - returns length of a string.
 * @s: Array name of parameter.
 *
 * Return: Length of string.
 */
int _strlen(char *s)
{
	int total = 0;

	for (; *s++;)
		total++;
	return (total);
}
