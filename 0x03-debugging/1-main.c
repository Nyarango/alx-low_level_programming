#include <stdio.h>

/**
 *main - Prints numbers from '0' to '9'
 *Return: Always 0 (Success)
 */

int main(void)
{
char i;

printf("Infinite loop incoming :(\n");

i = '0';

while (i <= '9')
{
putchar(i);
i++;
}

printf("\nInfinite loop avoided! \\o/\n");

return (0);
}
