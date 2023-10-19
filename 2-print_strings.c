#include "main.h"
/**
 * rootPrint13 - Print a root13 coded string.
 * @args: String to encode.
 *
 * Return: The number of character printed or -1 if it fails.
 */
int rootPrint13(va_list args)
{
	char *str = va_arg(args, char *);
	int i, j;
	char letter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char code[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (str == NULL)
	{
		str = "(null)";

		for (i = 0; str[i]; i++)
			_putchar(str[i]);

		return (i);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			for (j = 0; letter[j] != '\0'; j++)
			{
				if (str[i] == letter[j])
				{
					_putchar(code[j]);
					break;
				}
			}
		}
		else
			_putchar(str[i]);
	}
	return (i);
}
