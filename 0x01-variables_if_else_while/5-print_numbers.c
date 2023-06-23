#include <stdio.h>
/**
 * main - starting point for program execution.
 * @void: main function takes no parameters.
 * Return: 0 (success)
 */
int main(void)
{
	int c_No = 0; 
	while (c_No < 10)
	{
		putchar(c_No);
		c_No++;
	}

	putchar('\n');
	return (0);
}
