#include "main.h"

/**
 * create_file - func that creates a file
 * @filename: name of the file to be created
 * @text_content: content of the file
 *
 * Return: 1 on success, -1 otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int len_content;
	int writen_bits;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len_content = strlen(text_content) + 1;
		writen_bits = write(file, text_content, len_content);
	}
	if (close(file) == -1 || writen_bits != len_content)
	{
		return (-1);
	}
	return (1);
}
