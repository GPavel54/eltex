#include "print.h"

void printTable(int size, int table[][size]){
  for (int i = 0; i < size; i++){
    for (int j = 0; j < size; j++)
      printf("%2d ", table[i][j]);
    printf("\n");
  }
}
