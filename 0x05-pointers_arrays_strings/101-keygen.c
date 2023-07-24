#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point generates a random password
 *
 * Return: the generated password
 */
#define PASSWORD_LENGTH 12

int main(void)
{
// Characters that can be used in the password
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
char password[PASSWORD_LENGTH + 1]; // Extra 1 for the null terminator '\0'

// Seed the random number generator with the current time
srand(time(NULL));

// Generate the random password
for (int i = 0; i < PASSWORD_LENGTH; i++)
{
int index = rand() % (sizeof(charset) - 1); // Get a random index in the charset
password[i] = charset[index];
}

password[PASSWORD_LENGTH] = '\0'; // Null-terminate the password

// Print the generated password
printf("%s\n", password);

return 0;
}
