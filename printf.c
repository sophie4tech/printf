#include "main.h"
/**
  * _printf - funtion that print to std out
  * @format: is a character string.
  * Return: number of characters written
  */
int _printf(const char *format, ...)
{
	int charChecked;

	va_list args;

	f_prn fun_arr[] = {
		{'c', charPrint}, {'s', stringPrint}, {'i', digitPrint},
		{'d', digitPrint}, {'b', binaryPrint}, {'u', unsignedPrint},
		{'o', octalPrint}, {'x', hexLowerPrint}, {'X', hexUpperPrint},
		{'r', reversePrint}, {'R', rootPrint13},
		{'S', stringCustPrint}, {'\0', NULL}
	};

	if (format == NULL)
<<<<<<< HEAD
		return (-1);

	va_start(args, format);

	charChecked = argParser(format, fun_arr, args);

	va_end(args);

	return (charChecked);
=======
	{
		return (1);
	}
	for (ctr = 0; format[ctr] != '\0'; ctr++)
	{
		if (format[ctr] == '%')
		{
			ctr++;
			test = format[ctr];
			if (test == 'c' || test == 's' || test == 'd' || test == 'i')
			{
				sz += (call_fn(test))(pf_arg);
			}
			else
			{
			/*handling unsupported format specifier*/
				write(1, &format[ctr - 1], 1); /* write the '%' character*/
				write(1, &format[ctr], 1); /*write the character following '%'*/
				sz += 2; /* increae d size by 2 since 2, charactters are written*/
			}
		}
		else
		{
			write(1, &format[ctr], 1);
			sz++;
		}
	}
	va_end(pf_arg);
	return (sz);
>>>>>>> 19c052ab580039516155011be7545f1fdcafea8c
}
