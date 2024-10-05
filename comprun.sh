#!/usr/bin/sh
rm -rf a.out
musl-gcc -pedantic-errors -Wall -Wextra -Werror -O3 sush.c
./a.out
