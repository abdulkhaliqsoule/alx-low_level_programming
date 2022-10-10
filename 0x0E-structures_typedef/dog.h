#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - struct for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Description: contains age, name and owner variables for dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner o dog
 *
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * print_dog - prints struct dog
 * @d: pointer to struct
 *
 * Return: void
 */
void print_dog(struct dog *d);
/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: a dog object
 */
dog_t *new_dog(char *name, float age, char *owner);
/**
 * free_dog - frees dog
 * @d: dog to free
 */
void free_dog(dog_t *d);
#endif
