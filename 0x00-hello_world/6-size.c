#!/bin/bash
gcc 6-size.c -m32 -o size32 2> /tmp/32
gcc 6-size.c -m64 -o size64 2> /tmp/64
./size32
./size64
echo $?
