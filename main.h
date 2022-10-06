#ifndef _MAIN_H
#define _MAIN_H

/* libraries*/

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* prototype to write output to stdout, the standard output stream*/

_putchar(char c);

/* structure */

/**
* pick - A struct function.
*
* @input: 
*
* @f:    
*/
typedef struct type
{
        char input;
        int (*f)(va_list ptr);

} pick_t;

/* prototypes*/

int _printf(const char *format, ...);
int print_string(va_list ptr);
int print_char(va_list ptr);


#endif