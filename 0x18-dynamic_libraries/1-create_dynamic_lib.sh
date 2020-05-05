#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra *.o  -fPIC  -shared -o liball.so
