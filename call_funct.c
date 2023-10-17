#include "main.h"

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
		{'d', _putchar},
		{'i', _putchar},
		{'\0', NULL}
	};

	while (fun_arr[ctr].specix != '\0')
	{
		if (test == fun_arr[ctr].specix)
			return (fun_arr[ctr].fptr);
		ctr++;
	}
	return (NULL);
}
