/**
 * get_bit - returns value at a specified bit
 * @n: number
 * @index: position of bit
 * Return: value at position
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index == 0)
return (n & 1);
else
return (get_bit(n >> 1, index - 1));
}
