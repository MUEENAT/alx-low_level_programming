#include "main.h"
/**
 *_strlen - returns the string length
 * @s: string whose length to be printed
 * Return: length
 */

int _strlen(char *s)
{
        int c;
        int length = 0;

        for (c = 0; s[c] != '\0'; c++)
        {
                length++;
        }
        return (length);
}
