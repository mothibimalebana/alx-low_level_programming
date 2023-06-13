#include <stdlib.h>
#include <time.h>
/**
 * main - startind point for program execution.
 * 
 * @void: main function does not take any parameters.
 * 
 * Return: main fucntion does not have any parameters.
 * 
 * Description: program generates random numbers and determines if even or odd.
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

    if(n >= 0)
    {
        printf("%d is positive",n);
    }
    else if(n == 0)
    {
        printf("%d is zero",n);
    }
    else
    {
        printf("%d is negative",n);
    }
	return (0);
}