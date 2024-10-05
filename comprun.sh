#!/usr/bin/sh
musl-gcc -pedantic-errors -Wall -Wextra -Werror -O3 sush.c
./a.out
