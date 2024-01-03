#include "main.h"
/**
 * _strlen - returns length of a string.
 * @s: Array name of parameter.
 *
 * Return: Length of string.
 */
int _strlen(char *s)
{
	int total;

	for (; *s++;)
		total += 1;
	return (total);
}
