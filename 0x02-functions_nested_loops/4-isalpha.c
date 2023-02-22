#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checker function
 * Description: _islpha
 * Check the letter within the range of uppre and lower
 * cases
 * Return: 1 if is a letter of lower & upper cases else 0
*/
int _isalpha(int c)
{
if ((c >= 65) && (c <= 122))
{
  return (1);
}
else
{
return (0);
}
}
