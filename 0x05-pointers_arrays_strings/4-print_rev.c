#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to be print
 */

void print_rev(char *s)
{
	int n;
	int length = 0;

	for (n = 0; s[n] != '\0'; n++)
		length++;
	for (n = length; n >= 0; n--)
	_putchar(s[n]);
	_putchar('\n');
}
