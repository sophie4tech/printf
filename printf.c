#include "main.h"

/**
  * _printf - funtion that print to std out
  * @format: is a character string.
  * Return: number of characters written
  */

int _printf(const char *format, ...)
{
	int ctr = 0, sz = 0;
	char test;

	va_list pf_arg;

	va_start(pf_arg, format);

	if (format == NULL)
	{
		return (1);
	}
	for (ctr = 0; format[ctr] != '\0'; ctr++)
	{
		if (format[ctr] == '%')
		{
			ctr++;
			test = format[ctr];
			if(test =='c' || test == 's' || test == 'd' || test == 'i')
			{
				sz += (call_fn(test))(pf_arg);
			}
		}
		else
		{
			write(1, &format[ctr], 1);
			sz++;
		}
	}
	va_end(pf_arg);
	return(sz);
}
