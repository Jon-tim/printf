#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: format
 * Return: output
 */
int _printf(const char *format, ...)
{
	va_list ap;

	va_start(ap, format);

	int count = 0, k, j, i;
	char a, *str;
	int b;

	if (format == NULL)
		return (-1);

	for (k = 0; format[k] != '\0'; k++)
	{
		if (format[k] == '%')
		{
			k++;
			if (format[k] == 'c')
			{
				a = va_arg(ap, int);
				putchar(a);
				count++;
			}
			else if (format[k] == 's')
			{
				str = va_arg(ap, char *);
				for (j = 0; str[j] != '\0'; j++)
				{
					putchar(str[j]);
					count++;
				}
			}
			else if (format[k] == '%')
			{
				putchar('%');
				count++;
			}
			else if (format[k] == 'i' || format[k] == 'd')
			{
				b = va_arg(ap, int);
				printf("%d", b);
				count++;
			}
			else
			{
				putchar('%');
				putchar(format[k]);
				count += 2;
			}
		}
		else
		{
			putchar(format[k]);
			count++;
		}
		va_end(ap);
		return (count);
}
