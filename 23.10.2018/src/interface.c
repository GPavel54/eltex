#include "interface.h"

void printMenu(char ** argv){
  int i = 1;
  while (argv[i] != NULL){
    if (!strcmp(argv[i], "add"))
      printf("%d - Сложить два числа.\n", i);
    else if (!strcmp(argv[i], "sub"))
      printf("%d - Вычесть одно число из другого.\n", i);
    else if (!strcmp(argv[i], "mul"))
      printf("%d - Перемножить два числа.\n", i);
    else if (!strcmp(argv[i], "div"))
      printf("%d - Разделить первое число на второе.\n", i);
    i++;
  }
  printf("%d - Выйти.\n", i);
}

int printExpr(char c, char ** argv){
  //-48, чтобы привести '1' к 1
  char sign;
  if (argv[c - 48] == NULL)
    return 1;
  if (!strcmp(argv[c - 48], "add"))
    sign = '+';
  else if (!strcmp(argv[c - 48], "sub"))
    sign = '-';
  else if (!strcmp(argv[c - 48], "mul"))
    sign = '*';
  else if (!strcmp(argv[c - 48], "div"))
    sign = '/';
  printf("\033[1;32mВведите коэффициенты:\033[0m a b c d ((a + ib) %c (c + id))\n", sign);
  return 0;
}

struct complex countExpr(void * lh, struct complex z1, struct complex z2){
  struct complex (* expr)(struct complex, struct complex);
  expr = dlsym(lh, "expr");
  struct complex z3 = expr(z1, z2);
  return z3;
}
