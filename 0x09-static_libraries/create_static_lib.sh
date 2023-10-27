#!/bin/bash
gcc -c *.c
ar rsc liball.a
ar rsc liball.a *.o
