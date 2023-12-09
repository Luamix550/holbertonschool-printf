#include "main.h"
/**
 * _abs - get absolute number
 * @n:number
 * Return: number
 *
*/

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	return (n);
}
/**
 * _reverse - string reverse
 * @s: point string
 * @n: number
 * Return: string
 *
*/

char *_reverse(char *s, int n)
{
	int i, copy;

	n--;

	for (i = 0; i <= n; i++, n--)
	{
		copy = s[i];
		s[i] = s[n];
		s[n] = copy;
	}

	return (s);
}
/**
 * _itoa - converts the integer n to a string
 * @list: argument list
 * @base: base
 * Return: reverse
 *
*/
char *_itoa(int list, int base)
{
	char buffer[1024];
	int n = n = _abs(list), i, j;

	if (base < 2 || base > 32)
		exit(1);
	i = 0;
	while (n)
	{
		j = n % base;

		j = _abs(j);
		if (j >= 10)
			buffer[i++] = 65 + (j - 10);
		else
			buffer[i++] = 48 + j;
		n = n / base;
	}

	if (i == 0)
		buffer[i++] = '0';

	if (list < 0 && base == 10)
		buffer[i++] = '-';

	buffer[i] = '\0';

	return (_reverse(buffer, i));
}
/**
 * print_int - print integer
 * @buffer:memory espace
 * @counter: count
 * @list: argument list
 * Return: function assign
*/
int print_int(char *buffer, int counter, va_list list)
{
	int base = 10;
	char *s = _itoa(va_arg(list, int), base);

	return (_select(buffer, counter, s));
}