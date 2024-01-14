#include "main.h"
/**
 * _strcmp - Function that compares two strings.
 * @s1: Pointer to first string.
 * @s2: Pointer to second string to be compared with @s1.
 *
 * Return: Integer indicating result of comparison.
 */
int _strcmp(char *s1, char *s2)
{
	/**Initialize variables**/
	int i;
	int j;
	int result;

	for (i = 0; s1[i] != '\0'; i++)
		continue;
	for (j = 0; s2[j] != '\0'; j++)
		continue;


	result = i - j;

	return (result);
}
