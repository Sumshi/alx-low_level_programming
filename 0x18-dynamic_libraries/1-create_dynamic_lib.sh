#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o liball.so *.o

#gcc -c  -fPIC *.c comiles all *.c file to object file .o
#gcc -shared -o liball.so *.c creates a shared|dynamic library called liball.so
#gcc links the object files together into dynamic library called liball.so
