#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n: the root to be returned
 * Return: the result of the sqrt
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
	{
		return (-1);
	return (_sqrt_recursion(n));
	}
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
return (_sqrt_recursion(n + 1));
}
