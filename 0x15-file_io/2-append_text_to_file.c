#include "main.h"
/**
 * _strlen - get string lenght
 * @str: string
 *
 * Return: len
 */
int _strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: is the name of the file to create
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	len = write(fd, text_content, _strlen(text_content));
	if (len == -1)
		return (-1);
	close(fd);
	return (1);
}
