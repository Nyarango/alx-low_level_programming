#include "main.h"
#include <stdio.h>

/**
 *rot13 - Encodes a string using rot13.
 *@str: The input string to be encoded.
 *Return: Pointer to the encoded string.
 */
char *rot13(char *str)
{
char *ptr = str;
char *alpha_lower = "abcdefghijklmnopqrstuvwxyz";
char *alpha_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *rot_lower = "nopqrstuvwxyzabcdefghijklm";
char *rot_upper = "NOPQRSTUVWXYZABCDEFGHIJKLM";

while (*ptr != '\0')
{
char c = *ptr;
int index;
if ('a' <= c && c <= 'z')
{
index = c - 'a';
*ptr = rot_lower[index];
}
else if ('A' <= c && c <= 'Z')
{
index = c - 'A';
*ptr = rot_upper[index];
}
ptr++;
}
return (str);
}
