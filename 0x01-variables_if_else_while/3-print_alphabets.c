#include <stdio.h>
/**
 * main - Entry point
 *
 * description: 'print alphabet in lowercase and uppercase'
 * Return: always 0
 */

int main(void)
{
	int n = 97;
	int c = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (c <= 90)
	{
		putchar(c);
		c++;
	}
	{
		putchar ('\n');
	}
	return (0);
}
