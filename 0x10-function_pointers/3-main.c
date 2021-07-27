#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
int main (int argc, char **argv)
{
int (*p)(int, int);
if (argc == 4)
{
p = get_op_func((argv[3]));
p(atoi(argv[1]), atoi(argv[3]));
}
else
{
printf("Error");
}
return (0);
}
