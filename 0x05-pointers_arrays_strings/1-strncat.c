#include "holberton.h"

/**
 * _strncat - concatenate n bytes to destination string
 * @dest: string to be appended to
 * @src: string to append
 * @n: append n number of bytes(chars)
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0') /*i is index of null terminator*/
		i++;

	while (src[j] != src[n]) /*append replacing null terminator*/
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
/* another method

char *_strncat(char *dest, char *src, int n)
{
   //while dest exists and isn't null terminator yet
   while (*dest)
       dest++;

   // replace dest while src exists and insert nulls till n bytes
   for (i = 0; i < n; i++)
   {
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
   }
}
*/
