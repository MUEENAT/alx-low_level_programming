#include "main.h"
/**
 * is_prime_number - function that returns 1 if the
 * input integer is a prime number, otherwise return 0
 * @n: input
 * Return: is_prime_number
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n == 0 || n == 1)
		return (0);
	if (n == i)
	{
		return (1);
	}
	else
		return (0);
	if (n % i == 0)
	{
		return (0);
	}
	else
		return (1);
	i++;
	return (i);
}
