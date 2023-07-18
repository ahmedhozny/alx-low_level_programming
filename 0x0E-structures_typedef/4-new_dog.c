#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog object.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner
 *
 * Return: struct dog if valid, NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i, _name, _owner;

	p_dog = malloc(sizeof(*p_dog));

	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (_name = 0; name[_name]; _name++)
		;

	for (_owner = 0; owner[_owner]; _owner++)
		;

	p_dog->name = malloc(_name + 1);
	p_dog->owner = malloc(_owner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (i = 0; i < _name; i++)
		p_dog->name[i] = name[i];
	p_dog->name[i] = '\0';

	p_dog->age = age;

	for (i = 0; i < _owner; i++)
		p_dog->owner[i] = owner[i];
	p_dog->owner[i] = '\0';

	return (p_dog);
}
