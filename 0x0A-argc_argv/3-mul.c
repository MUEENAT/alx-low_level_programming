#include "main.h"		
/**
 * _atoi - converts a string to integer
 * @s: string to be converted
 * Return: Always 0
 */

int _atoi(char *s)
{		
	int i = 0;	
	int m = 0;
	int n = 0;		
	int length = 0;	
	int l = 0;	
	int numb = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (i < length && l == 0)
	{
	if (s[i] == '-')
		{
			++m;
		}

	if (s[i] >= '0' && s[i] <= '9')
		{
			numb = s[i] - '0';
			if (m % 2)
				numb = -numb;

			n = n * 10 + numb;

			l = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')

				break;

			l = 0;

		}
		i++;

	}
	if (l == 0)
	{
		return (0);
	}
	return (n);

}

/**
 * main - multiplies two numbers
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always
 */

int main(int argc, char *argv[])
{
		
	int sum, numb1, numb2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}	
		numb1 = _atoi(argv[1]);
		numb2 = _atoi(argv[2]);
		sum = numb1 * numb2;

		printf("%d\n", sum);
		
		return (0);
}
