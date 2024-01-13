#include "main.h"
/**
 * _strcat - A function that concatenates two strings.
 * @dest: Pointer to destination string.
 * @src: Pointer to source array.
 *
 * Return: Return destination array.
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (s);
}
