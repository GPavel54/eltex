#include "complex.h"
#include "interface.h"

int main(){
  int c;
  char buff[60];
  int count; // Проверка количество успешно считанных коэффициентов
  struct complex z1, z2;
  printMenu();
  while ((c = fgetc(stdin)) != '\n'){
    switch (c){
    case '1':
      printExpre('+');
      while (fgetc(stdin) != '\n'); // очистка stdin
      fgets(buff, 60, stdin);
      count = sscanf(buff, "%d %d %d %d", &z1.re, &z1.im, &z2.re, &z2.im);
      if (count != 4){
	printf("Не удалось считать 4 числа, попробуйте еще раз.\n");
	printMenu();
	continue;
      }
      z1 = add(z1, z2);
      printf("\033[1;31mСумма равна:\033[0m %d + i%d\n", z1.re, z1.im);
      printMenu();
      break;
    case '2':
      printExpre('-');
      while (fgetc(stdin) != '\n');
      fgets(buff, 60, stdin);
      count = sscanf(buff, "%d %d %d %d", &z1.re, &z1.im, &z2.re, &z2.im);
      if (count != 4){
	printf("Не удалось считать 4 числа, попробуйте еще раз.\n");
	printMenu();
	continue;
      }
      z1 = sub(z1, z2);
      printf("\033[1;31mРазность равна:\033[0m %d + i%d\n", z1.re, z1.im);
      printMenu();
      break;
    case '3':
      printExpre('*');
      while (fgetc(stdin) != '\n');
      fgets(buff, 60, stdin);
      count = sscanf(buff, "%d %d %d %d", &z1.re, &z1.im, &z2.re, &z2.im);
      if (count != 4){
	printf("Не удалось считать 4 числа, попробуйте еще раз.\n");
	printMenu();
	continue;
      }
      z1 = mul(z1, z2);
      printf("\033[1;31mПроизведение равно:\033[0m %d + i%d\n", z1.re, z1.im);
      printMenu();
      break;
    case '4':
      printExpre('/');
      while (fgetc(stdin) != '\n');
      fgets(buff, 60, stdin);
      count = sscanf(buff, "%d %d %d %d", &z1.re, &z1.im, &z2.re, &z2.im);
      if (count != 4){
	printf("Не удалось считать 4 числа, попробуйте еще раз.\n");
	printMenu();
	continue;
      }
      z1 = div(z1, z2);
      printf("\033[1;31mРезультат деления:\033[0m %d + i%d\n", z1.re, z1.im);
      printMenu();
      break;
    case '5':
      return 0;
    }
  }
  return 0;
}
