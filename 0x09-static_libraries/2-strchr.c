#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: pointer to character that hold the string
 * @c: character that hold the string
 * Return: always 0 (success)
 */

char *_strchr(char *s, char c)
{
        int i;

        for (i = 0; s[i] != '\0'; i++)
        {
                if (s[i] == c)
                        return (s + i);
        }
        return (NULL);
return (0);
}
