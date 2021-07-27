#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - puts together all calculation functions
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
/*init pointer*/
int (*p)(int, int);

/*making sure args right length*/
if (argc == 4)
{

/*setting pointer equal to right function*/
p = get_op_func((argv[2]));

/*using function on first and second number*/
printf("%i\n", p(atoi(argv[1]), atoi(argv[3])));

}

else
{
printf("Error\n");
}

return (0);
}
