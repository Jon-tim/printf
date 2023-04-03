#include "main.h"
/**
 * octal - prints decimal to octal
 * @args: argument
 * Return: counter
 */
int octal(va_list args)
{
	int i;
	int *arr;
	int counter = 0;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	arr = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		arr[i] = temp % 8;
		temp /= 8;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (counter);
}
