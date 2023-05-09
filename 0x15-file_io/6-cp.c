#include "main.h"

/**
 * open_files - opens the source and destination files
 * @argv: argument vector
 * @fd_from: pointer to the source file descriptor
 * @fd_to: pointer to the destination file descriptor
 */
void open_files(char **argv, int *fd_from, int *fd_to)
{
	*fd_from = open(argv[1], O_RDONLY);
	if (*fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	*fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (*fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(*fd_from);
		exit(99);
	}
}

/**
 * copy_file - copies the contents of one file to another
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @argv: argument vector
 */
void copy_file(int fd_from, int fd_to, char **argv)
{
	ssize_t bytes_read;
	char buffer[BUFFER_SIZE];

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, buffer, bytes_read) != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
}

/**
 * close_files - closes the source and destination files
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 */
void close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		close(fd_to);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	open_files(argv, &fd_from, &fd_to);

	copy_file(fd_from, fd_to, argv);

	close_files(fd_from, fd_to);

	return (0);
}
