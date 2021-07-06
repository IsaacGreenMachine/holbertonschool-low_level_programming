/**
 * _strlen - returns length of passed string based on pointer
 * @s: pointer to start ofo string
 *
 * Return: length of string.
 */
int _strlen(char *s)
{
int count = 0;
while (*s != 0)
{
s++;
count++;
}
return (count);
}
