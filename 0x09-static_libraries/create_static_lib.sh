#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar rc liaball.a *.o
