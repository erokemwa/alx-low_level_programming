#include "main.h"

/**
 * _strcat - contatenate two strings
 *
 * @dest: Destination string
 * @src: Source string
 *
 * Return: 0
 */


char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] += src[j];
		i++;
		j++;
	}

	dest += '\0';
	return (dest);
}
