#include "div.h"

struct complex expr(struct complex a, struct complex b){
  struct complex out;
  out.re = (a.re * b.re + a.im * b.im) / (b.re * b.re + b.im * b.im);
  out.im = (b.re * a.im - a.re * b.im) / (b.re * b.re + b.im * b.im);
  return out;
}

const char name[] = "Div";

void returnName(char * str){
  strncpy(str, name, 4);
}
