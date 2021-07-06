/**
 * rev_string - reverses string from passed char pointer
 * @s: pointer to the start of a string of chars
 *
 * Return: void
 */

void rev_string(char *s)
{
char r;
char *q = s;
while (*q != 0)
{
q++;
}
q--;
/*q is now at the end of the string*/
while (q >= s)
{
r = *q;
*q = *s;
*s = r;
q--;
s++;
}
}
