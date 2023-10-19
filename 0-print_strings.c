#include "main.h"

/**
 * charPrint - Print a character to the standard output.
 *
 * @args: Argument to print.
 *
 * Return: 1 if the character is printed and -1 if it fails.
 */
int charPrint(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}
/**
 * stringPrint - Print a string to stdout.
 * @args: Argument to print.
 *
 * Return: the number of character printed or -1 if it fails.
 */
int stringPrint(va_list args)
{
	char *str = va_arg(args, char *);
	int i;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}
