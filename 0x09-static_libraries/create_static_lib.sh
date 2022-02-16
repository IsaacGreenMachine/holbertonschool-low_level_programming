#!/bin/bash
#creates a static library liball.a from .c files in current directory.
gcc -c *.c
ar rc liball.a *.o
