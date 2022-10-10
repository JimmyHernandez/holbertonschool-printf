#include "main.h"
<<<<<<< HEAD
/*func1 file contains functions: print_char and print_string*/
=======
>>>>>>> 087b31b7f4f1384b17993d2fcfc340766e1ec36f
/**
 *print_char - function that prints single character
 *@ptr: input data from user
 *Return: character to be print
 */
int print_char(va_list ptr)
{
	char c;

	c = va_arg(ptr, int);

	if (c == '\0')
	{
		return ('\0');
	}

	_putchar(c);
	return (c);
}
/**
*print_string - prints a sequence of character.
*@ptr: input data from users.
*Return: the sequence of character to be print.
*/

int print_string(va_list ptr)
{
	char *str;
	int i;

  str = va_arg(ptr, char *);

<<<<<<< HEAD
    if (*str == '\0')
        {
            _putchar('\0');
        }
=======
	if (*str == '\0')
	{
		_putchar('\0');
	}
>>>>>>> 087b31b7f4f1384b17993d2fcfc340766e1ec36f

	for (i = 0 ; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

<<<<<<< HEAD
    return (i);
}
=======
	return (*str);
}
/**
 * print_numbers - Prints the integer
 * @arp: Argument Pointer
 *
 * Return: Count of all numbers printed
 */

int print_numbers(va_list arp)
{
	int num = 0, count = 0;

	num = va_arg(arp, int);
	count += print_int(num);

	return (count);
}
/**
 * print_int - Prints the integer
 * @i: Number to be printed
 *
 * Return: Count of all numbers printed
 */
int print_int(int i)
{
	int count = 1;
	unsigned int num = 0;

	if (i < 0)
	{
		_putchar('-');
		count++;
		num = i * -1;
	}
	else
	{
		num = i;
	}
	if (num / 10)
	{
		count += print_int(num / 10);
	}
	_putchar((num % 10) + 48);

	return (count);
}
>>>>>>> 087b31b7f4f1384b17993d2fcfc340766e1ec36f
