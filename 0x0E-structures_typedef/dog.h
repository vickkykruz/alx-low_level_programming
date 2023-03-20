#ifndef DOG_H
#define DOG_H
/**
 * struct dog - this function define the following elements
 * @name: The name of the given dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Description: This function define the data type of the following element
*/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif