#include "main.h"
/**
 * create_file -  creates a file
 * @filename: file name
 * @text_content: content of file
 * Return: always on success
 */
int create_file(const char *filename, char *text_content)
{
	int flags;
	int descriptor;
	mode_t permissions;
	ssize_t length = 0;
	ssize_t W;

	if (filename == NULL)
	{
		return (-1);
	}
	flags = O_WRONLY | O_CREAT | O_TRUNC;
	permissions = S_IRUSR | S_IWUSR;

	descriptor = open(filename, flags, permissions);
	if (descriptor == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
		{
			length++;
		}
		W = write(descriptor, text_content, length);
		close(descriptor);

		if (length != W)
		{
			return (-1);
		}
	}
	else
	{
		close(descriptor);
	}
	return (1);
}
