#ifndef ADD_H
#define ADD_H
#include <stdio.h>
#include <string.h>

struct complex{
  int re;
  int im;
};

struct complex add(struct complex a, struct complex b);
  
#endif
