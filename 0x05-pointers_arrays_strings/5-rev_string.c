#include "main.h"
#include <stdio.h>
/**
 * rev_string -  reverses a string
 * @s: string parameter
 */

void rev_string(char *s)
{
	int n;

	for (n = 10 ; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
