#ifndef COMPLEX_H
#define COMPLEX_H
#include <stdio.h>
#include <math.h>
struct complex{
  int re;
  int im;
};

struct complex add(struct complex a, struct complex b);
struct complex sub(struct complex a, struct complex b);
struct complex mul(struct complex a, struct complex b);
struct complex div(struct complex a, struct complex b);
#endif
