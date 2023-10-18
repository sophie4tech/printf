#include "main.h"

/**
  * _printf - funtion that print to std out
  * @format: is a character string.
  * Return: number of characters written
  */

int _printf(const char *format, ...)
{
	int ctr = 0;
	char c;
	char *str;

	va_list pf_arg;

	va_start(pf_arg, format);

	if (format == NULL)
	{
		return (1);
	}
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			ctr++;
		}
		else
		{
			format++;
			if (*format == '%')
			{
				write(1, format, 1);
				ctr++;
			}
			else if(*format == 'c')
			{
				c = va_arg(pf_arg, int);
				write(1, &c, 1);
				ctr++;
			}
			else if(*format == 's')
			{
				char *str = va_arg(pf_arg, char*);
				int str_len = strlen(str);
				write(1, str, str_len);
				ctr += str_len;
			}
			else if(*format == 'r')
			{
				write(1, "%r", 1);
				ctr+=2;
			}
			else if(*format == 'd')
			{
				char d = va_arg(pf_arg, int);
				write(1, &d, 1);
			}
		}
		format++;
	}
	va_end(pf_arg);
		
}
