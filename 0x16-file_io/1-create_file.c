#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: content to be put in file
 * Return: 0 if fails, 1 if success
 */
int create_file(const char *filename, char *text_content)
{

int fd, i;

if (filename == NULL)
return (0);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (fd == -1)
return (-1);

if (text_content != NULL)
i = write(fd, text_content, strlen(text_content));

if (i == -1)
return (-1);

close(fd);

return (1);
}
