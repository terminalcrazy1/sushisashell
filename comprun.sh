#!/usr/bin/sh
rm -rf a.out
musl-gcc -pedantic-errors -std=c99 -Wall -Wextra -Werror -O3 sush.c
./a.out
