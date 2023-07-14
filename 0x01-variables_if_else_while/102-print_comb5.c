#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int num1_tens;
	int num1_ones;
	int num2_tens;
	int num2_ones;

	for (num1_tens = 0; num1_tens <= 9; num1_tens++)
	{
		for (num1_ones = 0; num1_ones <= 9; num1_ones++)
		{
			for (num2_tens = 0; num2_tens <= 9; num2_tens++)
			{
				for (num2_ones = 0; num2_ones <= 9; num2_ones++)
				{
					int num1 = num1_tens * 10 + num1_ones;
					int num2 = num2_tens * 10 + num2_ones;

					if (num1 < num2)
					{
						putchar(num1_tens + '0');
						putchar(num1_ones + '0');
						putchar(' ');
						putchar(num2_tens + '0');
						putchar(num2_ones + '0');

						if (num1_tens != 9 || num1_ones != 8 || num2_tens != 9 || num2_ones != 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
