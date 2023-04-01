#include "main.h"
/**
 * print_buffer
 * @b: pointing to buffer
 * @size: size of buffer
 * Return: (void)
 */
void print_buffer(char *b, int size)
{
	int n, i, j;
	n = 0;
	if (size < 0)
	{
		printf("\n");
		return;
	}
	while (n < size)
	{
		j = size - n < 10 ? size - n : 10;
		printf("%08x: ", n);
		for(i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x" , *(b + n + i));
			else
				printf(" ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		 for (i = 0; i < j; i++)
		 {
		 printf("\n");
		 n += 10;
		 }
	}
}
