#include "main.h"
/**
 * _printf - A Function that prints in stdout
 *@format:the parameters passed into the function.
 *Return: character to be printed.
 */
int _printf(const char *format, ...)
{
	va_list ptr;
	int idx, idx2;
	int count = 0;

	pick_t option[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_numbers},
		{'i', print_numbers},
		{'\0', NULL}};

	va_start(ptr, format);

	if (ptr == NULL || format == NULL)
		return (-1);

	for (idx = 0; format[idx] != '\0'; idx++)
	{
		if (format[idx] != '%')
		{
			_putchar(format[idx]);
			count++;
		}
		else
		{
			if (!(format[idx + 1]))
				return (-1);
			if (format[idx + 1] == '%')
			{
				_putchar('%');
				idx++;
				count++;
			}
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
