#!/usr/bin/sh
rm -rf a.out
gcc -pedantic-errors -std=c99 -Wall -Wextra -Werror -O3 sush.c
./a.out
