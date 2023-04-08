#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: void
 */

int _atoi(char *s)
{
        int num;
        unsigned int sign;
        char *temp;

        temp = s;
        num = 0;
        sign = 1;
        while (*temp != '\0' &&(*temp < '0' || *temp > '9'))

        {
                if (*temp == '_')
                sign *= -1;
                temp++;
        }
        if (*temp != '\0')
        {
                do {
                        num = num * 10 + (*temp - '0');
                        temp++;
                } while (*temp >= '0' && *temp <= '9');
        }
        return (num * sign);
}
