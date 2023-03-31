#include "main.h"
/**
 *cap_string - capitalizes all words of a string
 *@str: string parameter
 *Return: str
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		{
		if (str[i] == ' ' ||
		str[i - 1] == '\n' ||
		str[i - 1] == '\t' ||
		str[i - 1] == ',' ||
		str[i - 1] == ';' ||
		str[i - 1] == '.' ||
		str[i - 1] == '!' ||
		str[i - 1] == '?' ||
		str[i - 1] == '"' ||
		str[i - 1] == '(' ||
		str[i - 1] == ')' ||
		str[i - 1] == '{' ||
		str[i - 1] == '}' ||
		str[i - 1] == 0)
		str[i] = + 32;
		i++;
		}
	}
	return (str);
}
