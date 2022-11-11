#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size:is the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: pointer allocate new size memory, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *final_pointer;
	unsigned int i, n_size = new_size;
	char *old_pointer = ptr;

	if (ptr == NULL)
	{
		final_pointer = malloc(new_size);
		return (final_pointer);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	final_pointer = malloc(new_size);

	if (final_pointer == NULL)
		return (NULL);

	if (new_size > old_size)
		n_size = old_size;

	for (i = 0 ; i < n_size ; i++)
		*(final_pointer + i) = *(old_pointer + i);

	free(ptr);

	return (final_pointer);
}
