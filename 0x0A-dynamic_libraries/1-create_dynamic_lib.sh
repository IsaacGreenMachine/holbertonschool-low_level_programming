#!/bin/bash
#creates a dynamic library with all .c files in current directory
gcc -c *.c
gcc *.o -shared -o liball.so
