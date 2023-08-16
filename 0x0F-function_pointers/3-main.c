#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
if (argc != 4)
{
printf("Error\n");
exit(98);
}

int num1 = atoi(argv[1]);
int num2 = atoi(argv[3]);
char *operator = argv[2];

int (*operation)(int, int) = get_op_func(operator);

if (operation == NULL)
{
printf("Error\n");
exit(99);
}

if ((*operator == '/' || *operator == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}

int result = operation(num1, num2);
printf("%d\n", result);

return (0);
}

