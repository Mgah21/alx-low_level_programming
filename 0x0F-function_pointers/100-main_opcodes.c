#include "function_pointers.h"

/**
 *main -  prints the opcodes of its own main function.
 *@argc: int values.
 *@argv: char values.
 *
 *Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int k;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (k = 0; k < atoi(argv[1]) - 1; k++)
		printf("%02hhx ", ((char *)main)[k]);
	printf("%02hhx\n", ((char *)main)[k]);
	return (0);
}
