#include "main.h"
/**
 * _strcpy - Function that copies the string pointed to by src to dest.
 * @dest: pointer to destination character array.
 * @src: pointer to source character array.
 *
 * Return: Returns destination.
 */
char *_strcpy(char *dest, char *src)
{
	/**Initialize variables**/
	int i;

	/**Iteratation of src**/
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i]; /**copy content of src to dest**/
	dest[i] = '\0'; /**Place null terminator on the last index**/

	return (dest);
}

