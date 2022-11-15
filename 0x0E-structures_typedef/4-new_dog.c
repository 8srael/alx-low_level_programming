#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc((strlen(name) + 1) * sizeof(char));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; i < strlen(name) ; i++)
		*(dog->name + i) = *(name + i);

	dog->age = age;

	dog->owner = malloc((strlen(owner) + 1) * sizeof(char));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i < strlen(owner); i++)
		*(dog->owner + i) = *(owner + i);

	return (dog);
}
