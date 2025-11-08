#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - Prints the content of a struct dog
 * @d: Pointer to the struct dog to print
 *
 * Description: Prints the name, age, and owner of the dog.
 * If any member of the struct is NULL, prints (nil) for that member.
 * If d is NULL, prints nothing.
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d == NULL)
	return;
printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
