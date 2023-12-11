#include "main.h"

/**
 * _abs - Get absolute value of a number.
 * @n: Number.
 * Return: Absolute value of the number.
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
 * _reverse - Reverse a string.
 * @s: Pointer to a string.
 * @n: Length of the string.
 * Return: Reversed string.
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
 * _itoa - Convert an integer to a string.
 * @list: Argument list.
 * @base: Base for conversion.
 * Return: Reversed string.
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
 * print_int - Print an integer.
 * @buffer: Memory space.
 * @counter: Count.
 * @list: Argument list.
 * Return: Function assignment.
 */
int print_int(char *buffer, int counter, va_list list)
{
int base = 10;
char *s = _itoa(va_arg(list, int), base);
return (_select(buffer, counter, s));
}
