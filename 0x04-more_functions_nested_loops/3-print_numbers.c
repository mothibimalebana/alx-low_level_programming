#include "main.h"
/**
 * print_numbers - Function that prints numbers from 0 to 9.
 * Return: Void.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('%d', i);
		_putchar('\n');
	}
}