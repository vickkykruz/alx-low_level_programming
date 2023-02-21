#include <unistd.h>
/**
 * _putchar - Use to out char
 * @c: contain the cahr value
 * Return: write 1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
