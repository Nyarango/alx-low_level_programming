#include "main.h"

/**
 *print_alphabet - Prints the alphabet in lowercase
 */
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
_putchar(letter);
}
_putchar('\n');
}
