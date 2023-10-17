#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    char k = 'a';
    char *str = "Hello";

    len = _printf("%s, this is %c test\n", str, k);
    printf("len: %d\n", len);
    return (0);
}
