#include "main.h"
/**
 * times_table - display output of 9 times
 * Return: void
*/
void times_table(void)
{
  int num1, num2, result;
  for (num1 = 0; num1 <= 9; num1++)
    {
      for (num2 = 0; num2 <= 9; num2++)
	{
	  result = num1 * num2;
	  if ((result / 10) == 0)
	    {
	      if (num2 == 0)
		{
		  _putchar('0');
		}
		if (num2 != 0)
		  {
		    _putchar(' ');
		    _putchar((result % 10) + '0');
		  }
		if (num2 < 9)
		  {
		    _putchar(',');
		    _putchar(' ');
		  }
	    }
	  else
	    {
	      _putchar((result / 10) + '0');
	      _putchar((result % 10) + '0');
	      if (num2 < 9)
		{
		  _putchar(',');
		  _putchar(' ');
		}
	    }
	}
      _putchar('\n');
    }
}		      
