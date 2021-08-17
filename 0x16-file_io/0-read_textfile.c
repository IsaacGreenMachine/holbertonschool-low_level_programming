#include "holberton.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
int i, j, k;
char *buf; 
if (filename == NULL)
return (0);
buf = malloc(letters);
i = open(filename, O_RDONLY);
if (i == -1)
return (0);
j = read(i, buf, letters);
if (j == -1)
return (0);
k = write(1, buf, j);
if (k == -1)
return (0);
close(i);
return (j);
}
