#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output
 * @filename: file name
 * @letters: number of letters it should read and print
 *
 * Return: 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t rbytes, wbytes;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);
	rbytes = read(fd, buffer, letters);
	if (rbytes == -1)
		return (0);
	buffer[letters + 1] = '\0';
	close(fd);
	wbytes = write(STDOUT_FILENO, buffer, rbytes);
	if (wbytes == -1)
		return (0);
	free(buffer);
	return (wbytes);
}
