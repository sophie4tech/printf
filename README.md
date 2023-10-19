Partner 1 is here (sophie4tech) {www.github.com/sophie4tech}
Partner 2 is here (zuru122) {www.github.com/zuru122}

**Printf Project**

The `printf` project is an implementation of the standard `printf` function in the C library.
It is used to print and format text based on format specifiers.

to use the 'printf' projectinclude the "main.h" header file in your project

digitPrint
digitPrint - Print a signed and unsigned digit to stdout.
args: Number to print.
int digitPrint(va_list args);

binaryPrint
Prints a signed or unsigned digit to the standard output..
args: Number to print.
Returns the number of characters printed
int binaryPrint(va_list args);

charPrint
charPrint - Print a character to the standard output.
args: Argument to print.
Returns the number of characters printed
int charPrint(va_list args);

stringPrint
stringPrint - Print a string to stdout.
args: Argument to print.
Returns the number of characters printed.
int stringPrint(va_list args);

unsignedPrint
unsignedPrint - Print unsigned integer to the stdout
args: Number to print
Returns the number of characters printed
int unsignedPrint(va_list args);

octalPrint
octalPrint - Print a number in octal.
@args: Number to print.
Prints a number in octal format to the standard output.
Returns the number of characters printed
int octalPrint(va_list args);

reversePrint
reversePrint - Print a string in reverse.
args: String to print.
int reversePrint(va_list args)

_putchar
_putchar -  Print a character to stdout.
c: Character to print.
int _putchar(char c)

hexLowerPrint
hexLowerPrint - Print the hex of a number in lower case
@args: Number to print.
Returns the number of characters printed.
int hexLowerPrint(va_list args)

rootPrint13
rootPrint13 - Print a root13 coded string.
@args: String to encode.
int rootPrint13(va_list args)

hexUpperPrint
hexUpperPrint - Print the hex of a number in upper case.
@args: Number to print.
int hexUpperPrint(va_list args)

stringCustPrint
stringCustPrint - Print a string to the stdout
@args: String to print.
int stringCustPrint(va_list args)

argParser
argParser - takes the argument from the printf function
format: is a character string.
fun_arr: arrays of function
args: argument pass to printf
int argParser(const char *format, f_prn fun_arr[], va_list args)

These functions are used to implement the printf project, 
allowing you to format and print text in various ways

