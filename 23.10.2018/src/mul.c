#include "mul.h"

struct complex expr(struct complex a, struct complex b){
  struct complex out;
  out.re = a.re * b.re - a.im * b.im;
  out.im = a.re * b.im + a.im * b.re;
  return out;
}

const char name[] = "Mul";

void returnName(char * str){
  strncpy(str, name, 4);
}
