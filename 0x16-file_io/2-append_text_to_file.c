#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file
 * @text_content: text to be appended to file
 * Return: 1 if success, 0 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, i;

if (filename == NULL)
return (-1);

if (text_content == NULL)
text_content = "";

fd = open(filename, O_APPEND | O_WRONLY, 0644);

if (fd == -1)
return (-1);


i = write(fd, text_content, strlen(text_content));

if (i == -1)
return (-1);

close(fd);
return (1);
}
