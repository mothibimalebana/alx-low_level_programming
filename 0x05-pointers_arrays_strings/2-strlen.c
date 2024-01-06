#include "main.h"
/**
 * _strlen - Function that returns the length of a string.
 * @s: String to be evaluted.
 *
 * Return: Length of string.
 */
int _strlen(char *s)
{
	int counter;
	int i;

	counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	return (counter);
}

