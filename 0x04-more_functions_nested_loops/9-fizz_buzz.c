#include <stdio.h>
/**
 *main- FizzBuzz sequence. mult 3 = Fizz, mult 5 = Buzz, both = FizzBuzz
 * Return: void.
 */
int main(void)
{
int i;
for (i = 1; i < 101; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%i", i);
}
printf(" ");
}
printf("\n");
return (0);
}
