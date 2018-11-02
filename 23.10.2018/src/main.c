#include <stdio.h>
#include <dlfcn.h>
#include "interface.h"
#include "complex.h"

int main(int argc, char ** argv){
  int c;
  char buff[60];
  int count; // Проверка количество успешно считанных коэффициентов
  struct complex z1, z2;
  long * library_handlers = malloc(sizeof(long) * argc);
  if (argc == 1){
    printf("Не введено ни одной операции.\n");
    return 0;
  }
  for (int i = 1; i < argc; i++){ // открывает библиотеки
    char name[40] = "../plugins/lib";
    strcpy(name + 14, argv[i]);
    strcpy(name + strlen(name), ".so");
    library_handlers[i - 1] = (long) dlopen(name, RTLD_LAZY);
    if (!library_handlers[i - 1]){
      printf("Не удалось открыть %s.\n", name);
      return 0;
    }
  }
  printMenu(argv);
  while ((c = fgetc(stdin)) != '\n'){
    if (c - 48 > argc){
      printf("Введено не правильное число.\n");
      printMenu(argv);
      while (fgetc(stdin) != '\n'); 
      continue;
    }
    int e = printExpr(c, argv);
    if (e == 1)
      break;
    while (fgetc(stdin) != '\n'); // очистка stdin
    fgets(buff, 60, stdin);
    count = sscanf(buff, "%d %d %d %d", &z1.re, &z1.im, &z2.re, &z2.im);
    if (count != 4){
      printf("Не удалось считать 4 числа, попробуйте еще раз.\n");
      while (fgetc(stdin) != '\n'); 
      printMenu(argv);
      continue;
    }
    struct complex z3 = countExpr((void *) library_handlers[c - 49], z1, z2);
    printf("\033[1;31mРезультат:\033[0m %d + i * %d\n", z3.re, z3.im);
    printMenu(argv);
  }
  for (int i = 0; i < argc - 1; i++){
    dlclose((void *) library_handlers[i]);
  }
  return 0;
}
