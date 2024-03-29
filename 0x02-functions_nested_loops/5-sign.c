#include "main.h"
/**
 * print_sign - Prints sign of a number.
 * @n: number
 * Return: Return 1 if greater than 0. Return -1 if less than.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
