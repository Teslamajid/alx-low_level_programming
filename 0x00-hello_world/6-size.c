#include <stdio.h>


/**
 * main - prints the size of various types based on
 * the computer it is compiled and run on..
 * Return: Always 0.
 */

int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));

	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of a float: %lu byte(s)\n", sizeof(float));
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long) sizeof(a));
	printf("size of a int: %lu byte(s)\n", (unsigned long) sizeof(b));
	printf("size of a long int: %lu byte(s))\n", (unsigned long) sizeof(c));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(d));
	printf("size of a float: %lu bytes(s)\n", (unsigned long) sizeof(f));
	return (0);
}
