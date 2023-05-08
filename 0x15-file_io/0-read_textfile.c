#include "main.h"
/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: A pointer to the name of the file to be read
 * @letters:  maximum number of characters to read
 * Return: No of letters to read, -1 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;/*represents the file descriptor*/
	int bytes_read;/*no of bytes read from the file*/
	int bytes_written;/*no of bytes written to file*/
	char *buffer;/*holds the contents of the file*/

	if (filename == NULL)
		return (0);
	/*allocate memory to the buffer*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)/*opening the file fails*/
	{
		free(buffer);/*memory allocated for buffer is freed*/
		return (0);
	}
	/*read characters from the file to the buffer*/
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)/*reading file fails*/
	{
		free(buffer);
		close(fd);/*file descriptor is closed*/
		return (0);
	}
	/*write the contents of the buffer to the standard output*/
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	/*return no of bytes that were read and written*/
	return (bytes_read);
}
