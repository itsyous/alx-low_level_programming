#include "main.h"

/**
 * error_file - check if a file is opened and handle errors
 * @file_from: initial file to copy from and to check
 * @file_to: destination file to copy to
 * @argv: argument vector
 * Return: Nothing
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copy content from a file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t nchr, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	nchr = 1024;
	while (nchr == 1024)
	{
		nchr = read(file_from, buf, 1024);
		if (nchr == -1)
			error_file(-1, 0, argv);
		nwr = write(file_to, buf, nchr);
		if (nwr == -1)
		error_file(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
