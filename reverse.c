#include "main.h"
/**
 * reverse - prints reversed string
 * @args: arguments
 * Return: k
 */
int reverse(va_list args)
{
	char *s = va_arg(args, char *);
	int i;
	int k = 0;

	if (s == NULL)
		s = "(null)";
	while (s[k] != '\0')
		k++;
	for (i = k - 1; i >= 0; i--)
		_putchar(s[i]);
	return (k);
}
