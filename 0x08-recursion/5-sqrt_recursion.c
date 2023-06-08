#include "main.h"

/**
 * natural_sqrt -  find the natural square root of the inputs number
 * @sqrt: string to hold the sqrt
 * @numb: number to find the sqrt
 * Return: -1 if the number does not have natural sqrt
 */

int natural_sqrt(int numb, int sqrt)
{
	if ((sqrt * sqrt) == numb)
		return (sqrt);
	if (sqrt == numb / 2)
		return (-1);
	return (natural_sqrt(numb, sqrt + 1));
}

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: number of square we are to return
 * Return: -1 if n does not have natural sqrt
 */

int _sqrt_recursion(int n)
{
	int sqrt = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (natural_sqrt(n, sqrt));
}
