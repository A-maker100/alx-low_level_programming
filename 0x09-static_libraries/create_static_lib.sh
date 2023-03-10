#!/bin/bash
gcc -c -Wall -Wextra -Wextra *.c
ar -rc liball.a *.o
ranlib liball.a
