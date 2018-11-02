#ifndef INTER_H
#define INTER_h
#include "complex.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
void printMenu(char ** argv);
int printExpr(char c, char ** argv); // Напечатать пример ввода коэффициентов
struct complex countExpr(void * lh, struct complex z1, struct complex z2);
#endif
