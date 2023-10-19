#include "main.h"
/**
 * unsignedPrint - Print unsigned integer to the stdout.
 *
 * @args: Number to print
 *
 * Return: Number of character printed or -1 if it fails.
 */
int unsignedPrint(va_list args)
{
	unsigned int num;

	num = va_arg(args, unsigned int);
	return (_printuns(num));
}
/**
 * octalPrint - Print a number in octal.
 * @args: Number to print.
 *
 * Return: Number of character printed or -1 if it fails.
 */
int octalPrint(va_list args)
{
	char buffer[32];
	unsigned int index = 0, number;
	int digits = 0, i;

	number = va_arg(args, int);

	if (number == 0)
		return (_putchar('0'));

	while (number > 0)
	{
		buffer[index] = '0' + (number % 8);
		number /= 8;
		index++;
		digits++;
	}

	for (i = index - 1; i >= 0; i--)
		_putchar(buffer[i]);

	return (digits);
}
