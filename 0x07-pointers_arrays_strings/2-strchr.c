#include "main.h"
#include <stdio.h>
/**
 * _strchr - Function that locates a character in a string.
 * @s: Pointer to string.
 * @c: Character to be located.
 * Return: Pointer to first occurence of a character c in s.
 */
char *_strchr(char *s, char c)
{
	/**Iterate through string**/
	while (*s != '\0')
	{
		if (*s == c)
			break;
		s++;
	}

	if (*s == '\0')
		return (NULL);
	return (s);
}
