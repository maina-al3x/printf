#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - function that produces output according to a format
 * @format: type of argument passed to function
 *
 * Return: n, number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, int k = 0, int n = 0;
	char *str = NULL;

	va_start(args, format);
	while (formart[i] != '\0')
	{
		if (formart[i] != '%')
			_putchar(format[i]);
			n++;
		else
		{
			if (formart[i + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				n++;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				str = va_arg(args, char *);
				while (str[k] != '\0')
				{
					_putchar(str[k]);
					n++;
					k++;
				}
			}
			else if (format[i + 1] == '%')
			{
				i++;
				_putchar('%');
				n++;
			}
		}
		i++;
	}
	va_end(args);
	return (n);
}
