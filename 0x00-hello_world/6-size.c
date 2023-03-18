#include <stdio.h>


/**
 * main - prints the size of various types based on 
 * the computer it is compiled and run on..
 * Return: Always 0.
 */
int main(void)

{
	printf("size of a char:%zubytes(s)\n", sizeof(char));

	printf("size of an int:%zubytes(s)\n", sizeof(int));
	printf("size of a long int:%zubyte(s)\n", sizeof(long int));
	printf("size of a long long int:%zubytes(s)\n", sizeof(long long int));
	printf("size of a float:%zubyte(s)\n", sizeof(float));
	return (0);
}
