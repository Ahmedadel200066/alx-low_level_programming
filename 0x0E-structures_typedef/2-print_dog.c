#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
    if (d != NULL)
    {
        if (d->name != NULL)
        {
            printf("%s", d->name);
        }
        else if (d->name == NULL)
        {
            printf("nil");
        }
        if (d->owner != NULL)
        {
            printf("%s", d->owner);
        }
        else if (d->owner == NULL)
        {
            printf("nil");
        }
    }
}
