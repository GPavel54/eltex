#include "sub.h"

struct complex expr(struct complex a, struct complex b){
  struct complex out;
  out.re = a.re - b.re;
  out.im = a.im - b.im;
  return out;
}

const char name[] = "Sub";

void returnName(char * str){
  strncpy(str, name, 4);
}
