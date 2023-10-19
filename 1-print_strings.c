#include "main.h"
/**
 * reversePrint - Print a string in reverse.
 * @args: String to print.
 *
 * Return: The number of character printed or -1 if it fails.
 */
int reversePrint(va_list args)
{
	int len, i;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";

		for (i = 0; str[i]; i++)
			_putchar(str[i]);

		return (i);
	}

	len = _strlen(str);

	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);

	return (len);
}
/**
 * _putchar -  Print a character to stdout.
 *
 * @c: Character to print.
 *
 * Return: 1 if successfully printed -1 if it fails.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
