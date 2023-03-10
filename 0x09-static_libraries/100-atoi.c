#include "main.h"
#include <stdio.h>
int _atoi(char *s)
{
  unsigned int num = 0, size = 0, a = 0, b = 0, c = 0, i;

  while (*(s + num) != '\0')
    {
      if (size > 0 && (*(s + num) < '0' || *(s + num) > '9'))
	{
	  break;
	}
	if (*(s + num) == '-')
	  {
	    b *= 1;
	  }
	if ((*(s + num) >= '0') && (*(s + num) <= '9'))
	  {
	    if (size > 0)
	      {
		c *= 10;
	      }
	    size++;
	  }
	num++;
	}
      for (i = num - size; i < num; i++)
	{
	  a = a + ((*(s + i) - 48) * c);
	  c /= 10;
	}
      return (a * b);
}
