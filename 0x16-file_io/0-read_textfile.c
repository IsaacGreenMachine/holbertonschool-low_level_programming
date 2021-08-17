#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to standard output.
 * @filename: name of file to be read
 * @letters: number of letters to be read
 *
 * Return: 0 if fails, printed chars if success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int i, j, k;
char *buf;

if (filename == NULL)
return (0);

if (letters == 0)
return (0);

buf = malloc(letters * sizeof(char));
if (buf == NULL)
return (0);

i = open(filename, O_RDONLY);
if (i == -1)
return (0);

j = read(i, buf, letters);
if (j == -1)
return (0);

k = write(1, buf, j);
if (k == -1)
return (0);
free(buf);
close(i);
return (j);
}
