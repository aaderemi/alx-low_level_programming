#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c | xargs ar rcs liball.a
