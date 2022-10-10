#include "main.h"
/**

 * _printf -A Function that prints in
 *  stdout depending on the format.

 *@format:the parameters passed into the function.
 *Return: character to be printed.
 */
int _printf(const char *format, ...)

{	va_list ptr;

	int idx, idx2;
	int count = 0;
	/*structure of type pick*/
	static pick_t option[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_numbers},
		{'i', print_numbers},
		{'\0', NULL}
	};
	va_start(ptr, format);
	/*  filter to avoid null character in the program*/
	if (ptr == NULL || format == NULL)
		return (-1);
	for (idx = 0; format[idx] != '\0'; idx++)
	{
		/* if not have format specifer prints the characters*/
		if (format[idx] != '%')
		{
			_putchar(format[idx]);
			count++;
		}
		/* to set a format specifer*/
		if (format[idx] == '%')

		{
			/* to print just % */
			if (format[idx + 1] == '%')
			{
				_putchar('%');
				idx++;
				count++;
			}
			/* print character with format specifer*/

		{ /* to print just % */
			if (format[idx + 1] == '%')
			{	_putchar('%');
				idx++;
				count++;
			} /* print character with format specifer*/

			for (idx2 = 0; idx2 < 4; idx2++)
			{
				if (format[idx + 1] == option[idx2].data)
				{
					count += option[idx2].f(ptr);
					idx++;
				}
			}
		}
	}
	va_end(ptr);
	return (count);
}
