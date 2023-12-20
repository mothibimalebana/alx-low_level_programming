#include "main.h"
/**
 * print_last_digit - A function that prints the last digit of a number.
 * @n: Number to extract last digit from.
 *
 * Return: Last digit on @n.
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (ld);
}

