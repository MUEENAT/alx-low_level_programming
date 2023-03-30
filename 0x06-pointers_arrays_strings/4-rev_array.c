#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 *@a: an array
 *@n:  number of elements of the array
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int m;

	for (i = 0; a[i] < n / 2; i++)
	{
		m = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = m;
	}
}
