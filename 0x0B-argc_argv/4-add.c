#include <stdlib.h>
#include <stdio.h>
/**
 * main - adds positive numbers
 * @argc: number of modifiers
 * @argv: list of modifiers
 *
 * Return: void
 */
int main(int argc, char **argv)
{
int i;
int sum = 0;
	if (argc == 1)
		{
		sum = 0;
		}
	else
		{
		for (i = 1; i < argc; i++)
		{
		if (atoi(argv[i]) < 0)
			{
			printf("Error\n");
			return (1);
			}
		else if (atoi(argv[i]) == 0 && argv[i] != 0)
			{
			printf("Error\n");
			return (1);
			}
		else
			{
			sum = sum + atoi(argv[i]);
			}
		}
		}
	printf("%i\n", sum);
	return (0);
}
