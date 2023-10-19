#ifndef MAIN_H
#define MAIN_H

/* Libraries*/
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

#include <limits.h>
#include <stddef.h>

/* Structures*/
/**
  * struct function_print - typedef for struct
  * @specix: the character
  * @fptr: the function pointer
  */

typedef struct function_print
{
	char specix;
	int (*fptr)(va_list args);
} f_prn;

/** Functions*/
int _printf(const char *format, ...);
int argParser(const char *format, f_prn fun_arr[], va_list args);
int charPrint(va_list args);
int stringPrint(va_list args);
int percentPrint(va_list args);
int digitPrint(va_list args);
int binaryPrint(va_list args);
int unsignedPrint(va_list args);
int octalPrint(va_list args);
int hexLowerPrint(va_list args);
int hexUpperPrint(va_list args);
int reversePrint(va_list args);
int rootPrint13(va_list args);
int stringCustPrint(va_list args);

/** Helper */
int _putchar(char c);
int _strlen(char *str);
int _printnum(int num);
int _printuns(unsigned int num);


#endif /* MAIN_H */
