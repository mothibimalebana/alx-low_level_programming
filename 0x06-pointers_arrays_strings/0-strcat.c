#include "main.h"
/**
 * _strcat - Write a function that concatenates two strings.
 * @dest: pointer to destination character array.
 * @src: pointer to source character array.
 *
 * Return: pointer to destination array.
 */
char *_strcat(char *dest, char *src)
{
	/**Initialize variables**/
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

