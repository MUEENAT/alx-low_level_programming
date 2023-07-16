#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append
 * @text_content: content
 * Return: always on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *f;

	if (filename || text_content)
	{
		return (-1);
	}

	f = fopen(filename, "a");
	if (f == NULL)
	{
		return (-1);
	}

	if (fputs(text_content, f) == EOF)
	{
		fclose(f);
		return (-1);
	}
	fclose(f);
	return (1);
}
