#include <stdio>

/**
 * main - prints the name of the program
 * @argc: number of argumentspassed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc _attibute_((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}	
