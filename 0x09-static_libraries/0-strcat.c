#include "main.h"
/**
 * _strcat -  concatenates two strings
 * @src: source string
 * @dest: destination string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
        int dlength = 0;
        int slength = 0;
        int n;

        for (n = 0; dest[n] != '\0'; n++)
                dlength++;
        for (n = 0; src[n] != '\0'; n++)
                slength++;
        for (n = 0; n <= slength; n++)
                dest[dlength + n] = src[n];
        return (dest);
}
