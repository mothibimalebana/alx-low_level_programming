#include "main.h"

/**
 * _memcpy - Function that copiies memory area.
 * @dest: Pointer to memory destination.
 * @src: Pointer to source destination to be copied.
 * @n: number of bytes to be copied.
 *
 * Return: Returns destination adress.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/**initialize variables**/
	unsigned int i;
	unsigned int j;

	/**Point to last adress of destination**/
	i = 0;
	while (i < n)
	{
		dest++;
		i++;
	}

	j = 0;
	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}

	return (dest);
}
