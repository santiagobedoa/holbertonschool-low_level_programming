#include "main.h"

/**
 * close_with_error - close file descriptor with error
 * @fd: file descriptor
 *
 * Return: void
 */
void close_with_error(int fd)
{
	int error;

	error = close(fd);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, file_from_read, file_to_write;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 00664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while (file_from_read >= 1024)
	{
		file_from_read = read(file_from, buffer, 1024);
		if (file_from_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close_with_error(file_from);
			close_with_error(file_to);
			exit(98);
		}
		file_to_write = write(file_to, buffer, file_from_read);
		if (file_to_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}

	}
	close_with_error(file_from);
	close_with_error(file_to);
	return (0);
}
