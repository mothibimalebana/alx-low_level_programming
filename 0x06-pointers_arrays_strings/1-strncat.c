#include "main.h"
/**
 * _strncat - Function that concatenates two strings.
 * @dest: Pointer to destination address.
 * @src: Pointer to source adress.
 * @n: number of char to print from src.
 *
 * Return: Pointer to destination array.
 */
char *_strncat(char *dest, char *src, int n)
{
	/**Initialise variables**/
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[j] = src[j];
	}

	dest[j] = '\0';

	return (dest);
}

