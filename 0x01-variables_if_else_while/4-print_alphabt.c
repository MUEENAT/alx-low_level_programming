#include <stdio.h>
/**
 * main - Entry point
 * description: 'print lowercase alphabet expect q and e'
 * Return: always 0
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 110 || n == 133)
		n++;
		continue;
		{
			putchar(n);
			n++;
		}
	}
	putchar('\n');
	return (0);
}
