#!/bin/bash
gcc -c *.c  -Wall -Werror -Wextra -pedantic -std=gnu89 && ar rcs liball.a *.o 
