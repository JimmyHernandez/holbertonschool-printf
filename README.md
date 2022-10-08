

# Project

    Make your own printf() function.

## Name

    _printf();

## Requierements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- You are not allowed to use global variables
- No more than 5 functions per file
- The prototypes of all your functions should be included in your header file called main.h
- Don’t forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the _putchar function for this project

## Description

    In this project we are working to make our own printf(). The function _printf() 
    produces output according to a format, write out to stdout.

## Synopsis

    #include <stdio.h>

    int printf(const char format, ...);

## Format

    - The format string is a character string, beginning and ending in it's initial state.
    Each conversion specification is introduce by the character '%' and ends with a conversion specifier.

    Example:
    
          code: 

                int number = 10;
               _printf("%i", number);

          output:   10

    - Since the character '%' is use to set the format conversion we can't 
    use it in the regular way, instead we use double "%%".

        Example:

        code:   _printf("%%");

        output:   %

## Conversion Specifier

    A character that specifies the type of conversion to be applied. The conversion specifiers and their meaning are:

| Syntax | Description |
|  ---   |  -------    |
|   c    |a character  |
|   s    |string       |
| i , d  |integer      |

## Compilation

    -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

## Function prototypes

    - print_char();

        prints a single character.

    - print_str();

        prints two or more of character (sequence).
    
    - print_number();

        print integers.

    - print_numbers();
    
        print_double.

## Return value

    When success return the number of character printed, excluding the '\0' byte.
    When fails return negative value. 

## Example

![example](https://miro.medium.com/max/640/1*hJ2wWk5QyOmK7RHNmfLGMw.png)

## References

- [Man page](https://man7.org/linux/man-pages/man3/printf.3.html)
- [Markdown rules](https://github.com/DavidAnson/markdownlint/blob/v0.26.2/doc/Rules.md#md041)
- [Markdown Cheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)
- [Markdown Extended](https://www.markdownguide.org/extended-syntax/)

## Authors

- [Jimmy Hernandez Rivera](https://github.com/JimmyHernandez)
- [Aryam Alvarez](https://github.com/aryamalvrz)

## License

This project is licensed under the Holberton School Software Engineering Program.
