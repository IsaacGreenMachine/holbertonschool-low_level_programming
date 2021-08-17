#include "holberton.h"
/**
 * main - copies a file
 * @argc: number of arguments
 * @argv: array of strings of arguments
 * Return: 0.
 */
int main(int argc, char **argv)
{
int f1, f2, i;
char buff[1024];
if (argc != 3)/*If num of args is not correct*/
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

f1 = open(argv[1], O_WRONLY);
if (f1 == -1)/*if file 1 DNE or can't read*/
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

/*if file 2 exists truncate*/
f2 = open(argv[2], O_TRUNC | O_RDONLY | O_CREAT, 0644);
if (f2 == -1)/*if cannot create or write to f2*/
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

while ((i = read(f1, buff, 1024)) > 0)
{
if (write(f2, buff, i) != i)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
if (i == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
}

i = close(f1);
if (i == -1)/*if you cannot close a file descriptor (1)*/
dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f1), exit(100);
i = close(f2);
if (i == -1)/*if you cannot close a file descriptor (2)*/
dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f2), exit(100);
return (0);
}
