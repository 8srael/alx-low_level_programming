#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c
 *
 * @c: parameter that you want to print
 * Return: 1 or 0
*/
int _putchar(char c);

/**
 * _strlen - function that returns the length of a string
 *
 * @s : string (array of char)
 *
 * Return: the length of the string in param
 */
int _strlen(char *s);

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b : size
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b);

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1 : dest string
 * @s2 : src string
 * @n : unsigned int
 *
 * Return: pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);

void *_calloc(unsigned int nmemb, unsigned int size);

int *array_range(int min, int max);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
