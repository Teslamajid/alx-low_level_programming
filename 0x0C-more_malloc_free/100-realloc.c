#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * *_realloc - Reallocates a block of memory previously allocated by malloc
 *
 * @ptr: pointer to the original block of memory
 *
 * @old_size: The size of the original block of memory
 *
 * @new_size: The new size of the block of memory
 *
 *Return: A pointer to reallocated memory block, NULL if the allocation fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	new_ptr = malloc(new_size);

	if (new_ptr && ptr)
	{
		memcpy(new_ptr, ptr, old_size);
	}
	free(ptr);

	return (new_ptr);
}

