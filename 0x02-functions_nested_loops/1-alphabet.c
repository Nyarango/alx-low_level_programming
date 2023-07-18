#include "main.h"

/**
 *print_alphabet - Prints the alphabet in lowercase
 */
void print_alphabet(void)
{
char start = 'a';
char end = 'z';

while (start <= end)
{
_putchar(start++);
}
_putchar('\n');
}
