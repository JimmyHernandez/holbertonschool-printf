#ifndef _MAIN_H_
#define _MAIN_H_

/*LIBRARIES*/
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*STRUCTURE*/

/**
*struct - a type to print.
*@data: data type.
*@f: function type.
*/
typedef struct pick
{
    char data;
    int (*f)(va_list ptr);

} pick_t;

/*PROTOTYPE TO WRITE OUTPUT TO STDOUT*/
int _putchar(char c);

/*main function*/
int _printf(const char *format, ...);

/*prototypes*/
int print_string(va_list ptr); /*to print string*/
int print_char(va_list ptr); /* to print a single character*/
int print_percentage(__attribute__((unused))va_list ptr);
int print_numbers(va_list arp);
int print_int(int i);

#endif