#include "main.h"

/**
  * print_remainder - takes format string as argument & print rem
  * @format: string
  * Return: 0 success
  */
int print_remainder(const char *format)
{
	int len = 0;

	while (format[len] && format[len] != '%')
	{
		write(1, &format[len], 1);
		len++;
	}
	return (len);
}
/**
 * get_string_printer - Retrieve a string printer function based on d specifier
 * @test: character to receive
 *
 * Return: A function to a string printer or NULL if not found
 */
string_printer get_string_printer(char test)
{
	if (test == 'r')
		return (print_remainder);
	else
		return (NULL);
}
/**
  * call_fn - caller function to print specix
  * @test: list value
  * Return: 0 success
  */
int (*call_fn(char test))(va_list)
{
	int ctr = 0;
	f_prn fun_arr[] = {
		{'c', _putchar},
		{'s', _pustr},
		{'d', _int},
		{'i', _int},
		{'\0', NULL}
	};
	while (fun_arr[ctr].specix != '\0')
	{
		if (test == fun_arr[ctr].specix)
			return (fun_arr[ctr].fptr);
		ctr++;
	}
	string_printer str_printer = get_string_printer(test);
	return ((int (*)(va_list))str_printer);
}
