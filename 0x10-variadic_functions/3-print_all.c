#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_all - prints anything
 *format: list of types of arguments passed to the function
 *@format: The format string that specifies the types of arguments
 *that will be passed to the function. The format can include
 *'c' for char, 'i' for int, 'f' for float, and 's' for string.
 *Any other characters are ignored.
 *If 'format' is NULL, the function does nothing.
 *@...: The variable number of arguments to be printed based on the format.
 */
void print_all(const char * const format, ...)
{
int i = 0;
char *str, *sep = "";

va_list list;
va_start(list, format);

if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(list, int));
break;
case 'i':
printf("%s%d", sep, va_arg(list, int));
break;
case 'f':
printf("%s%f", sep, va_arg(list, double));
break;
case 's':
str = va_arg(list, char *);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
break;
default:
i++;
continue;
}
sep = ", ";
i++;
}
}

printf("\n");
va_end(list);
}
