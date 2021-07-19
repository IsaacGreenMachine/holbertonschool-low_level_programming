#include "holberton.h"
/**
 * main - prints program name and new line.
 * @argc: number of modifiers
 * @argv: list of modifiers
 *
 * Return: void
 */
void main(int argc, char *argv[])
{
int i;
argc = argc;
for (i = 0; *(argv[0] + i) != 0; i++)
{
_putchar(*(argv[0] + i));
}
_putchar('\n');
}
