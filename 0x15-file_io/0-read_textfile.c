#include "main.h"
/**
 * read_textfile -  reads a text file and prints
 * it to the POSIX standard output
 * @filename: file to be read
 * @letters: content of file
 * Return: always on success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *s;
	ssize_t R;
	ssize_t W;
	FILE *F;

	F = fopen(filename, "r");
	if (F == NULL)
	{
		return (0);
	}
	s = malloc(sizeof(char) * (letters + 1));
	if (s == NULL)
	{
		fclose(F);
		return (0);
	}
	R = fread(s, sizeof(char), letters, F);

	if (R <= 0)
	{
		fclose(F);
		free(s);
		return (0);
	}
	s[R] = '\0';
	W = write(STDOUT_FILENO, s, R);

	if (W != R)
	{
		fclose(F);
		free(s);
		return (0);
	}
	fclose(F);
	free(s);
	return (R);
}
