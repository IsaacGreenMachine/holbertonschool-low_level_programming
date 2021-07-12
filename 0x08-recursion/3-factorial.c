/**
 * factorial - returns the factorial of the passed number
 * @n: input
 *
 * Return: factorial
 */

int factorial(int n)
{
if (n>1)
{
return n * factorial(n - 1);
}
else if (n == 1 || n == 0)
{
return (1);
}
else
{
return (-1);
}
}
