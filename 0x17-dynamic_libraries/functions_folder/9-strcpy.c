#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	while (src[len] != '\0')
		len++;


	for (i = 0; i <= len; i++)
		dest[i] = src[i];

	return (dest);
}
