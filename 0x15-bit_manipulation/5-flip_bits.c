/**
 * flip_bits - returns bits needed to be flipped for two numbers to equal
 * @n: first number
 * @m: second number
 * Return: number of changes needed to make two bytes equal
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
for (n = n ^ m, m = 0; n > 0; n >>= 1)
{
if ((n & 1) == 1)
m++;
}
return (m);
}
