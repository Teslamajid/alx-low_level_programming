#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem(int elem)
{
	printf("%d\n", elem);
}

/**
 * print_elem_hex - prints an integer, in hexadecimal
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem_hex(int elem)
{
	printf("0x%x\n", elem);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int array[5] = {0, 98, 402, 1024, 4096};

	array_iterator(array, 5, &print_elem);
	array_iterator(array, 5, &print_elem_hex);
	return (0);
}
#include <stdio.h>
/**
 *array: A pointer to the array that you want to iterate over.
size: An integer representing the size or length of the array.
func: A function pointer that points to the function you want to apply to.
 */
void array_iterator(int *array, int size, void (*func)(int))
{
	int i;
	for (i = 0; i < size; i++)
	{
		func(array[i]);
	}
}

