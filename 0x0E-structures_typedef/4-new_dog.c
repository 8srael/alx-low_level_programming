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
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(strlen(name) * sizeof(char));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	strcpy(dog->name, name);

	dog->age = age;

	dog->owner = malloc(strlen(owner) * sizeof(char));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	strcpy(dog->owner, owner);

	return (dog);
}
