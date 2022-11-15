#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - definition of a struct dog
 *
 * @name : name of the dog (string)
 * @age : dog's age (float number)
 * @owner : dog's owner (string)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d : struct that we wnat to initialize
 * @name : string
 * @age : float number
 * @owner : array of char
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - function that prints a struct dog
 *
 * @d : struct that we want to print
 */
void print_dog(struct dog *d);

typedef struct dog dog_t;

/**
 * new_dog - function that creates a new dog
 * @name : string
 * @age : float number
 * @owner : array of char
 *
 * Return: NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - function that frees dogs
 *
 * @d : pointer to a struct that we wnat to free
 */
void free_dog(dog_t *d);

#endif
