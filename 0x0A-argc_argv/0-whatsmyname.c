#include <stdio.h>

/**
*main - entry point
*@argc: The number of command line arguments
*@argv: An array containing the program command line arguments
*
* Return: always 0
*/
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
