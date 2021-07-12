/**
 * _pow_recursion - returns x to the power of y
 * @x: base
 * @y: exponent
 *
 * Return: x to the power of y
 */
int _pow_recursion(int x, int y)
{
if (y > 1)
{
y--;
return(x * _pow_recursion(x , y));
}
else if (y == 1)
{
return(x);
}
else if (y == 0)
{
return (1);
}
else
{
return (-1);
}
}
