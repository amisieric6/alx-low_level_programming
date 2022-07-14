#include "main.h"
/**
 * _strncpy - copies a string to another string
 *
 * @dest: buffer
 * @src: the string to be copied
 * @n: the number of bytes to include in @dest
 *
 * Return: (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
