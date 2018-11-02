#ifndef MUL_H
#define MUL_H
#include <stdio.h>
#include <string.h>

struct complex{
  int re;
  int im;
};

struct complex mul(struct complex a, struct complex b);

#endif
