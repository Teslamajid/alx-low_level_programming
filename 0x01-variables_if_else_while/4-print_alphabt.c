#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
	{
		if (ab != 'e' && ab != 'q')
			putchar(ab);
	}
	putchar('\n');

	return (0);
}
