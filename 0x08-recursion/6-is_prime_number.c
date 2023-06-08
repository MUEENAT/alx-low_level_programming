#include "main.h"

/**
 * is_divisble - check if the integer is prime number
 * @numb: integer to be checked
 * @dvs: divisible
 * Return: always 0
 */

int is_divisible(int numb, int dvs)
{
	if (dvs == 1)
		return (0);
	if (numb % dvs == 0)
		return (1);
	return (is_divisible(numb, dvs + 1));
}
/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: integer number to check if is prime
 * Return: always 0
 */

int is_prime_number(int n)
{
	int numb = 0;

	if (n <= 1)
	{
		return (0);
	}
	return (is_divisible(numb, n + 1));
}
