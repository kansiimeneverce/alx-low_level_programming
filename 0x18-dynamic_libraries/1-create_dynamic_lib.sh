#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fPIC -O *.C
gcc -shared -o liball.so *.o
export LD -LIBRARY_PATH=. :$LD_LIBRARY_PATH
