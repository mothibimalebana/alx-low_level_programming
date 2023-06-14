#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - starting point for program execution.
 *
 * @void: main function has no parameters.
 * Return: main function has no return values.
 * Description: program must determine if n is positive or negatibe.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n >= 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
