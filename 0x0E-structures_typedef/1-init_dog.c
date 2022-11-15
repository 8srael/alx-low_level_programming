#include <stdio.h>
#include "dog.h"

/**
 * init_dog -  function that initialize a variable of type struct dog
 *
 * @d : pointer to a struct
 * @name : string
 * @age : float number
 * @owner: string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d != NULL)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
