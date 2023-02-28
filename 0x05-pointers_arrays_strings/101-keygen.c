#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* generate_password - generates a random valid password for the 101-crackme program
*
* Return: a string containing the generated password
*/

#define PASSWORD_LENGTH 10

char generate_password(void)
{
	int i = 0;

	static char password[PASSWORD_LENGTH + 1];
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	const int charset_size = sizeof(charset) - 1;

	srand(time(NULL));

	while (i < PASSWORD_LENGTH)
	{
		password[i] = charset[rand() % charset_size];
		i++;
	}

	password[i] = '\0';

	return (password);
}
