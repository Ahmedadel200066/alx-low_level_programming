#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the details of a dog structure.
 * @d: Pointer to the struct dog to be printed.
 *
 * Description: This function prints the name, age, and owner of a dog.
 * If an element of d is NULL, it prints (nil) instead of the element.
 * If d is NULL, it does nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else if (d->name == NULL)
		{
			printf("(nil)\n");
		}
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else if (d->owner == NULL)
		{
			printf("(nil)\n");
		}
	}
}
