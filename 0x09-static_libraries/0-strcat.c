#include "main.h"
 /**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * This function appends the contents of the source string to the destination
 * string, overwriting the null terminator at the end of the destination string
 * and then adds a new null terminator at the end. The strings must be null-
 * terminated.
 *
 * Return: Pointer to the resulting destination string.
 */

char *_strcat(char *dest, char *src:`)
{
	int i;
	int j;


	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
