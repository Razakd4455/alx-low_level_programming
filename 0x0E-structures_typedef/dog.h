#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - a structure to represent information about a dog
 * @name: dog name
 * @age:age of dog
 * @owner:name of dog owner
 */
struct dog
{

	char *name;
	float age;
	char *owner;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
