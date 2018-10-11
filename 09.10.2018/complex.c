#include "complex.h"

struct complex add(struct complex a, struct complex b){
  struct complex out;
  out.re = a.re + b.re;
  out.im = a.im + b.im;
  return out;
}

struct complex sub(struct complex a, struct complex b){
  struct complex out;
  out.re = a.re - b.re;
  out.im = a.im - b.im;
  return out;
}

struct complex mul(struct complex a, struct complex b){
  struct complex out;
  out.re = a.re * b.re - a.im * b.im;
  out.im = a.re * b.im + a.im * b.re;
  return out;
}

struct complex div(struct complex a, struct complex b){
  struct complex out;
  out.re = (a.re * b.re + a.im * b.im) / (pow(b.re, 2) + pow(b.im, 2));
  out.im = (b.re * a.im - a.re * b.im) / (pow(b.re, 2) + pow(b.im, 2));
  return out;
}
