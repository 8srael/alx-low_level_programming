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
 * _memset - function that fills memory with a constant byte.
 *
 * @s : pointer to memory address
 * @b : constant byte
 * @n : number of bytes
 *
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - function that copies memory area.
 *
 * @dest : pointer to destination
 * @src : point to source
 * @n : number of bytes that we want to copy
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - function that locates a character in a string
 *
 * @s : string
 * @c : character
 *
 * Return: first occurence of char c in s , NULL if c isn't found
 */
char *_strchr(char *s, char c);

/**
 * _strspn - function that gets the length of a prefix substring
 * @s : point to memory address
 * @accept : prefix substring
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strprbrk -  function that searches a string for any of a set of bytes.
 *
 * @s : a string
 * @accept : another string
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - function that locates a substring.
 *
 * @haystack : first string
 * @needle : second string
 *
 * Return:a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - function that prints the chessboard
 *
 * @a : 2D array
 */
void print_chessboard(char (*a)[8]);

#endif
