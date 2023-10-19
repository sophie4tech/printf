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
	{
		return (-1);
	}

	va_start(args, format);

	charChecked = argParser(format, fun_arr, args);

	va_end(args);

	return (charChecked);
}
