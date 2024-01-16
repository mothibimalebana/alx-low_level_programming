#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Function that reverses an array.
 * @a: Pointer to array to be reversed.
 * @n: Number of elements in the array.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	/**Initialize variables**/
	int i;
	int j;

	/**Pointer to last element of array**/
	i = 0;
	while (i < n)
	{
		i++;
		a++;
	}

	a--;
	j = 0;
	while (j < n)
	{
		printf("%d", *a);
		a--;
		j++;
		if (i != 0)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
