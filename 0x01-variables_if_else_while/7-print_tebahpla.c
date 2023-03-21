#include <stdio.h>
/**
 * main - Entry point
 * description: 'all single digit numbers of base 10 starting from 0'
 * Return: always 0
 */

int main(void)
{
		int n = 122;

		while (n >= 97)
		{
		putchar(n);
			n--;
		}
		putchar('\n');
		return (0);
}
