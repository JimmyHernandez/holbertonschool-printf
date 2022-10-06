#include "main.h"

/*func1 file contains functions: print_char and print_string*/
 
/**
 * 
 * print_char - function that prints single character
 * 
 * ptr: input data from user
 * 
 * return: character to be print
 */
int print_char(va_list ptr)
{
    char c;
    c = va_arg(ptr,int);

    if ( c == '\0')
       {
            return ('\0');
       }
      
       _putchar(c);

       return (c);
}
/**
 *  print_string - prints a sequence of character.
 * 
 * ptr: input data from users.
 * 
 * return: the sequence of character to be print.
 */
int print_string(va_list ptr)
{
    char *str;
    int i;

    str = va_arg(ptr, char *);

    if (str == '\0')
        {
            _putchar('\0');
        }

    for (i = 0 ; str[i] != '\0';i++)
        {
            _putchar(str[i]);
        }

    return (str);
}