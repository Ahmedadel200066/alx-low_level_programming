#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
    if (d != NULL)
    {
        if (d->name != NULL)
        {
            printf("%g", d->name);
        }
        else if (d->name == NULL)
        {
            printf("nil");
        }
        if (d->owner != NULL)
        {
            printf("%g", d->owner);
        }
        else
            (d->owner == NULL)
            {
                printf("nil");
            }
    }
}