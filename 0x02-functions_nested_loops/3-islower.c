#include "main.h"
#include <ctype.h>
/**
 * _islower - checker function
 * @c: The input cariable
 * Return: 1if lowecase and 0 if is uppercase
*/
int _islower(int c)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter == c)
{
return (1);
}
letter++;
}
return (0);
}
