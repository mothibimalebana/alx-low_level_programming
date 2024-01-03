#include "main.h"
/**
 * swap_int - Function tha swaps the values of two integers.
 * @a: Pointer to first parameter value.
 * @b: Pointer to second parameter value.
 *
 * Return: Void.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;

	*b = tmp;
}
