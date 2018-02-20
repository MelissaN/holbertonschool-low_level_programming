#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create new instance of struct dog
 * @name: member
 * @age: member
 * @owner: member
 * Return: initialized instance of struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	dog1 = malloc(sizeof(dog_t)); /* validate if dog1 initiated correctly */
	if (dog1 == NULL)
		return (NULL);

	dog1->name = name;
	dog1->age = age;
	dog1->owner = owner;

	return (dog1);
}
