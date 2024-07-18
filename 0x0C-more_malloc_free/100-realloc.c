#include <stdlib.h>
#include <string.h>
/**
 * _realloc - Reallocates memory block using malloc and free
 * @ptr: Pointer to the previously allocated memory
 * @old_size: The size of the allocated space for ptr
 * @new_size: The new size of the memory block
 *
 * Return: A pointer to the newly allocated memory, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
{
return (ptr);
}
if (ptr == NULL)
{
new_ptr = malloc(new_size);
return (new_ptr);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
new_size = (new_size < old_size) ? new_size : old_size;
memcpy(new_ptr, ptr, new_size);
free(ptr);
return (new_ptr);
}
