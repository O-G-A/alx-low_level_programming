#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments in the entire program
 * @argc: prints number of the arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/

	printf("%d\n", argc - 1);

	return (0);
}
