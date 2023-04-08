#include "main.h"
/**
 * _strcpy -  copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @src: string to be copied
 * @dest: string parameter
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
        int n;

        for (n = 0; src[n] != '\0'; n++)
                dest[n] = src[n];
        return (dest);
}
