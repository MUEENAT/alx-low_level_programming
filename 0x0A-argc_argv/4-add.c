#include "main.h"
/**
 * main - function that adds positive numbers
 * @argc: argument count
 * @argv: string of arrays
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int j = 0;
	int num;
	int sum = 0;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	for (i = 1; i < argc; i++)
	while (argv[i][j])
	if (!isdigit(argv[i][j]))
	{
		printf("Error\n");
		return (1);
	}
	{
		j++;
		num = atoi(argv[i]);
	}
	if (num > 0)
	{
	sum += num;
	}
	printf("%d\n", sum);
	return (0);
}

