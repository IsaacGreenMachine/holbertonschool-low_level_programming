/**
 * swap_int - swaps values of two pointed to variables
 * @a: address of variable 1
 * @b: address of variable 2
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
