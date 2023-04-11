#!/bin/bash

# compile all .c files in the directory i'm into .o which is the object files
gcc -c *.c

# create the static library liball.a from the from the object files
ar rcs liball.a *.o 

# clean up the object files
rm *.o
