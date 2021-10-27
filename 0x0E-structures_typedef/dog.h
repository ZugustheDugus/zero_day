#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Creates a struct who is a very gud boi
 * @name: variable for the dog name
 * @age: variable for the age of the gud boi
 * @owner: variable for who owns the gud boi
 */

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strdup(char *str);

#endif
