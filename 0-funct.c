#include "main.h"
/**
  * _putchar - print a character
  * @pf_arg: list of character
  * Return: 0 on success
  */
int _putchar(va_list pf_arg)
{
	char ch;
	ch = va_arg(pf_arg, int);

	return (write(1, &ch, 1));
}
/**
  * _pustr - print a string
  * @pf_arg: list of string to print
  * Return: 0 on success
  */
int _pustr(va_list pf_arg)
{
	char *str = va_arg(pf_arg, char *);
	int n = 0;
	int strlen = 0;

	for (n = 0; str[n] != '\0'; n++)
	{
		write(1, &str[n], 1);
		strlen++;
	}
	return (strlen);
}
