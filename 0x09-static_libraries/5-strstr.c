#include "main.h"


/**
 * _strstr - Entry point
 * @haystack: input
 * @neddle: input
 * Return: Always 0 (success)
 */
char *_strstr(char *haystack, char *neddle)
{

	for *(; *haystack != '\0'; haystack++)
	{
		char * 1 = haystack;
		char *p = neddle;

	while (*1 == *p && *p != '\0')
	{
		1++;
		p++;
	}
	if (*p == '\0')
		return (haystack);
}
return (0);
}
