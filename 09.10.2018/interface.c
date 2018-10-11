#include "interface.h"

void printMenu(){
  printf("1 - Сложить два числа\n\
2 - Вычесть одно число из другого\n\
3 - Перемножить два числа\n\
4 - Разделить одно число на другое\n\
5 - Выход из программы\n");
}
void printExpre(char sign){
  printf("\033[1;32mВведите коэффициенты:\033[0m a b c d ((a + ib) %c (c + id))\n", sign);
}
