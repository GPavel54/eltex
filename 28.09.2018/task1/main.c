#include "print.h"

int main(){
  if (N % 2 != 0)
    printf("Ничего не получится, размер стороны матрицы должн быть четным.");
    return 0;
  }
  int arr[N][N];
  int initValue = 0;
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++){
      arr[i][j] = initValue;
      initValue++;
    }
  printTable(arr, N);
  printf("\n");
  int temp[N];
  for (int i = 1; i < N; i += 2){
    for (int j = 0; j < N; j++){
      temp[j] = arr[j][i];
    }
    for (int j = 0; j < N; j++){
      arr[j][i] = arr[j][i - 1];
      arr[j][i - 1] = temp[j];
    }
  }
  printTable(arr, N);
  return 0;
}
