#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
    if (d != NULL)
    {
        if (d->name != NULL)
        {
            printf("%s\n", d->name);
        }
        else if (d->name == NULL)
        {
            printf("nil\n");
        }
        printf("%f\n", d->age);
        if (d->owner != NULL)
        {
            printf("%s\n", d->owner);
        }
        else if (d->owner == NULL)
        {
            printf("nil\n");
        }
    }
}
