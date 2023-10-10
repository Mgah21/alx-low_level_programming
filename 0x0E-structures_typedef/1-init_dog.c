#include "dog.h"

/**
 * init_dog - initializion a variable of type struct dog.
 * @d: pointer to struct type dog
 * @name: pointers to charactor name's dog
 * @age: age's dog
 * @owner: pointer to character owner's dog
 * Return: No5.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d.name = name;
d.age = age;
d.owner = owner;
}
}
