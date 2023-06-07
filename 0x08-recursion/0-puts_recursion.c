#include "main.h"
/**
 * _puts_recursion - function that print string
 * @s: string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
