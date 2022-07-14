#include "main.h"
/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
 
char *rot13(char *x)
{
	int i, j;
	char string[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char letters[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; x[i] != '\0'; i++)
	{
		for (j = 0; j < 56; j++)
		{
			if (x[i] == string[j])
			{
				x[i] = letters[j];
				break;
			}
		}
	}

	return (x);
}
