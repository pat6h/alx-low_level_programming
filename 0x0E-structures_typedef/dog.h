#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - A structure to represent a dog
 * @name: The dog's name (char pointer)
 * @age: The dog's age (float)
 * @owner: The dog's owner's name (char pointer)
 */
typedef struct dog
{
char *name;
float age;
char *owner;
}
dog_t;

#endif
