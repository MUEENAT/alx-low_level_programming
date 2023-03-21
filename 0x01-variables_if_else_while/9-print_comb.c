#include <stdio.h>
/**
 * main - Entry point
 * description: 'all single digit numbers of base 10 starting from 0'
 * Return: always 0
 */

int main(void)
{
		int n;

		for (n = 48; n <= 57; n++)
		{
			putchar(n);
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
		return (0);
}
