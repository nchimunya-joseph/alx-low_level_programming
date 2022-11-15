#ifndef DOG_H
#define DOG_H

/**
 * struct - dog data type
 * @name: string pointer variable
 * @age: variable
 * @owner: variable
 * Description: name, age and owner of a dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
