#include "main.h"
/**
 * swap_int - Function that swaps the values of two integers.
 * @a: First value, later going to take place of second value.
 * @b: Second value, later going to take place of the first value.
 *
 * Return: void. (nothing)
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
