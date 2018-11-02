#ifndef DIV_H
#define DIV_H
#include <stdio.h>
#include <string.h>

struct complex{
  int re;
  int im;
};

struct complex div(struct complex a, struct complex b);

#endif
