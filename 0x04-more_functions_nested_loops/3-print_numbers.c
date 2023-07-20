#include "main.h"

/**
 *print_numbers - prints the numbers from 0 to 9, followed by a new line
 */
void print_numbers(void)
{
int i;
char digits[] = "0123456789\n";

for (i = 0; digits[i] != '\0'; i++)
{
_putchar(digits[i]);
}
}
