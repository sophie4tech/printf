#include "main.h"
/**
 * digitPrint - Print a signed and unsigned digit to stdout.
 *
 * @args: Number to print.
 *
 * Return: Number of character printed or -1 if it fails.
 */
int digitPrint(va_list args)
{
	int num = va_arg(args, int);

	return (_printnum(num));
}
/**
 * binaryPrint - Print the binary code for unsigned int number to stdout.
 *
 * @args: Number to print.
 *
 * Return: Number of character printed or -1 if it fails.
 */
int binaryPrint(va_list args)
{
	int flag = 0, count = 0;
	unsigned int i, n, mask = 1;

	n = va_arg(args, unsigned int);

	mask <<= (sizeof(unsigned int) * 8 - 1);

	for (i = 0; i < sizeof(unsigned int) * 8; i++)
	{
		if (mask & n)
		{
			count += _putchar(1 + '0');
			flag = 1;
		}
		else
		{
			if (flag == 1 || i == sizeof(unsigned int) * 8 - 1)
				count += _putchar(0 + '0');
		}

		mask >>= 1;
	}

	return (count);
}
