#include <dog.h>
struct dog
{
char name[50];
float age;
char owner[50];
};
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog variable to be initialized
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
strncpy(d->name, name, sizeof(d->name) - 1);
d->name[sizeof(d->name) - 1] = '\0';
d->age = age;
strncpy(d->owner, owner, sizeof(d->owner) - 1);
d->owner[sizeof(d->owner) - 1] = '\0';
}
int main(void)
{
struct dog my_dog;
init_dog(&my_dog, "Poppy", 3.5, "Bob");
printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
return (0);
}
