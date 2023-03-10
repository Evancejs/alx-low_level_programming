#!/bin/bash

# Get a list of all .c files in the current directory
C_FILES=$(ls *.c)

# Compile all .c files into .o files
for file in $C_FILES
do
  gcc -Wall -pedantic -Werror -Wextra -c "$file"
done

# Create the static library from the .o files
ar rc liball.a *.o

# Index the static library
ranlib liball.a
