#include "main.h"
#define BUFFER_SIZE 1024
/**
 * main - program execution begins
 * @argc: number of arguments
 *@argv: array size of argc
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_to;/*file to copy to*/
	int file_from;/*file to copy from*/
	int bytes_read;
	int bytes_written;
	char buffer[BUFFER_SIZE];/*stores the contents of the file*/

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)/*cannot read file*/
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);/*read errror*/
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 664);
	if (file_to == -1)/*cannot write to the file*/
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);/*exit with code 99 for write error*/
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);/*exit with code 98 for read error*/
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
