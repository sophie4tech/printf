#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

/**
  * struct fun_print - typedef for struct
  * @specix: the character
  * @fptr: the function pointer
  */

typedef struct function_print
{
	char specix;

	int(*fptr)(va_list);
} f_prn;

int _printf(const char *format, ...);
int _pustr(va_list);
int _putchar(va_list);
int (*call_fn(char test))(va_list);



#endif /* MAIN_H */
