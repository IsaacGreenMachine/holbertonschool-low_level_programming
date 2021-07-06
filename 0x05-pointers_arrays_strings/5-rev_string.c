#include <stdio.h>
/**
 * print_rev - prints a string in reverse
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
while(q >= s)
{
r = *q;
*q = *s;
*s = r;
q--;
s++;
}
}


/*Pointers at beginning and end of string, third hand char
 Holberton
 *s      *q
swap outer two (using extra char r), move in.
 nolbertoH
  *s    *q
 nolbertoH
   *s  *q
 notberloH
    *s*q
 notrebloH
     *
end condition: pointers are equal or if larger pointer is smaller than little pointer
*/
