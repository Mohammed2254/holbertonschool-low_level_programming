#ifndef DOG_H
#define DOG_H
/**
* struct dog - Structure to store information about a dog
* @name: The name of the dog
* @age: The age of the dog
* @owner: The name of the dog's owner
* Description: This structure holds basic information about a dog.
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
#endif /* DOG_H */
