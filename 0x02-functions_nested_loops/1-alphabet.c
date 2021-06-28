#include "holberton.h"
/* more headers goes there */

/**
 * print_alphabet - generates a random number and makes a statement about the last digit
 * Return: will always be void
 * betty style doc for function main goes there
 */

 void print_alphabet(void){
int i;
	 for (i=0; i < 26; i++)
{
_putchar(i+97);
}
	 _putchar('\n');
}
