#include "main.h"
/**
 * print_s - prints a string
 * @args: string  argument
 * Return: number of characters
 */
int print_s(va_list args)
{
	int i, count = 0;
	char *str;

	i = 0;
	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	return (count);
}
/**
 * print_percent - pass the percent sing
 * @args: string  argument
 * Return: return the percent sing
 *
 */
int print_percent(va_list args)
{
	char *str;

	str = "%";
	if (va_arg(args, int) == *str)
	{
		return (*str);
	}
	return (*str);
}

/**
 * print_c - prints character
 * @args: character argument
 * Return: number of characters
 */
int print_c(va_list args)
{
        int c;

        c = va_arg(args, int);
        return (_putchar(c));
}

/**
 * print_d - prints a decimal
 * @args: decimal argument
 * Return: counter
 */
int print_d(va_list args)
{

	unsigned int abs, x, count, o;
	int n;

	o = 0;
	n = va_arg(args, int);
		if (n < 0)
		{
			abs = (n * -1);
			o += _putchar('-');
		}
		else
			abs = n;

	x = abs;
	count = 1;
	while (x > 9)
	{
		x /= 10;
		count *= 10;
	}
	while (count >= 1)
	{
		o += _putchar(((abs / count) % 10) + '0');
		count /= 10;
	}
	return (o);
}
/**
 * print_i - prints integer
 * @args: integer argument
 * Return: the decimal function
 */

int print_i(va_list args)
{
	return (print_d(args));
}
Footer

