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
 * create_file - creates a file
 * @filename: is the name of the file to create
 * @text_content: text content.
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		len = 0;
		text_content = "";
	}
	else
	{
		len = write(fd, text_content, _strlen(text_content));
	}
	if (len == -1)
		return (-1);
	close(fd);
	return (1);
}
