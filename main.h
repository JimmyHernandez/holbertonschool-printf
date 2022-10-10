#ifndef _MAIN_H_
#define _MAIN_H_

/*LIBRARIES*/
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

<<<<<<< HEAD
/*STRUCTURE*/
=======
/* prototype to write output to stdout, the standard output stream*/

int _putchar(char c);

/* structure */
>>>>>>> 087b31b7f4f1384b17993d2fcfc340766e1ec36f

/**
*struct - a type to print.
*@data: data type.
*@f: function type.
*/
typedef struct pick
{
<<<<<<< HEAD
    char data;
    int (*f)(va_list ptr);

=======
	char data;
	int (*f)(va_list ptr);
>>>>>>> 087b31b7f4f1384b17993d2fcfc340766e1ec36f
} pick_t;

/*PROTOTYPE TO WRITE OUTPUT TO STDOUT*/
int _putchar(char c);

/*main function*/
int _printf(const char *format, ...);
<<<<<<< HEAD

/*prototypes*/
int print_string(va_list ptr); /*to print string*/
int print_char(va_list ptr); /* to print a single character*/

#endif
=======
int print_string(va_list ptr);
int print_char(va_list ptr);
int print_numbers(va_list arp);
int print_int(int i);

#endif
>>>>>>> 087b31b7f4f1384b17993d2fcfc340766e1ec36f
