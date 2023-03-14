#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the
 * arguments of your program.
 * @ac: The argument counters in a function
 * @av: The argument vectors in a function
 * Return: The string value
*/

char *argstostr(int ac, char **av)
{
char *ptr;
int i = 0, a = 0, b = 0, c = 0;

/* Conditions */
if (ac == 0 || av == NULL)
{
return (NULL);
}
while (a < ac)
{
b = 0;
while (av[a][b] != '\0')
{
i++;
b++;
}
a++;
}

i = i + ac + 1;

ptr = (char *) malloc(i *sizeof(char));
if (ptr == 0)
{
return (NULL);
}

for (a = 0; a < ac; a++)
{
for (b = 0; av[a][b] != '\0'; b++)
{
ptr[c] = av[a][b];
c++;
}
ptr[c] = '\n';
c++;
}
return (ptr);
}
