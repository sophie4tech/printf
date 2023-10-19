#include "main.h"

/**
  * argParser - takes the argument from the printf function
  * @format: is a character string.
  * @fun_arr: arrays of function
  * @args: argument pass to printf
  * Return: number of characters written
  */
int argParser(const char *format, f_prn fun_arr[], va_list args)
{
	int i = 0, j, charsChecked = 0;

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '%' && format[i + 1] != '\0')
		{
			int specix_found = 0;

			for (j = 0; j < 12; j++)
			{
				if (format[i + 1] == fun_arr[j].specix)
				{
					specix_found = 1;
					charsChecked += fun_arr[j].fptr(args);
					i++;
					break;
				}
			}
			if (!specix_found)
				charsChecked += _putchar('%');
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			charsChecked += _putchar('%');
			i++;
		}
		else if (format[0] == '%' && format[1] == '\0')
		{
			return (-1);
		}
		else
			charsChecked += _putchar(format[i]);
		i++;
	}
	return (charsChecked);
}
