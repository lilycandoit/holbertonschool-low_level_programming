#include "stdio.h"

/**
* main - to print all arguments it receives
* @argc: Argument count
* @argv: Arguments ifselves (array of strings)
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while(i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

