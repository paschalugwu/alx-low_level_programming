#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure for a dog
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/* Define a new type dog_t as a new name for the type struct dog */
typedef struct dog dog_t;

#endif /* DOG_H */
