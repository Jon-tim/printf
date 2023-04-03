#include "main.h"
/**
 * rot13 - printf str to ROT13
 * @args: arguments
 * Return: count
 */
int rot13(va_list args)
{
	int i, j, count = 0;
	int k = 0;
	char *s = va_arg(args, char *);
	char alphabets[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char rev_alphas[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; alphabets[j] && !k; j++)
		{
			if (s[i] == alphabets[j])
			{
				_putchar(rev_alphas[j]);
				count++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			count++;
		}
	}
	return (count);
}
