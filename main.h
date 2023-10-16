#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

struct function_ch
{
	char specifier;
	int(*fun)(valist);
}


#endif /* MAIN_H */
