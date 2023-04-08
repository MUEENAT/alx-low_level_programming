#include <stdio.h>
#include "main.h"
/**
 * _isupper - check for lowercase character
 * @c: c the character be checked
 * Return: 1 for uppercase character or 0 for anything else
 */

int _isupper(int c)
{
        if (c >= 65 && c <= 90)
        {
                return (1);
        }
                return (0);
}
