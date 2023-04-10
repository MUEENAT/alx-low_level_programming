#include "main.h"
/**
 * main -  program that prints the minimum number of
 * coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cents;
	int twenties;
	int tens;
	int five;
	int twos;
	int ones;
	int total;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	{
	cents = atoi(argv[1]);
	printf("0\n");
	}
	{
	twenties = cents / 25;
	cents %= 25;
	tens = cents / 10;
	cents %= 10;
	five = cents / 5;
	cents %= 5;
	twos = cents / 2;
	cents %= 2;
	ones = cents;
	total = twenties + tens + five + twos + ones;
	}
	{
		printf("%d\n", total);
	}
		return (0);
}
