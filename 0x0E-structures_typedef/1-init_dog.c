#include "dog.h"
/**
 * init_dog - Initializes a dog structure with the given values.
 * @d: Pointer to the dog structure to be initialized.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner's name of the dog.
 *
 * Description: This function initializes a dog structure with the provided
 *              values for name, age, and owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d == 1){
	d->age = age;
	d->name = name;
	d->owner = owner;
	}
}
