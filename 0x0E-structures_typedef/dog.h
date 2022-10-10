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
/*
 * typedef struct dog my_dog;
 */
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
#endif
