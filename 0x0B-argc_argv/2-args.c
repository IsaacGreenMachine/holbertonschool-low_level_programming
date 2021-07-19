#include <stdio.h>
/**
 * main - prints all arguments
 * @argc: number of modifiers
 * @argv: list of modifiers
 *
 * Return: void
 */
int main(int argc, char **argv)
{
while (argc--)
{
printf("%s\n", *argv);
argv++;
}
return (0);
}
