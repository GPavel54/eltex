#include "../task1/print.h"

int main(){
  if (N % 2 == 0){
    printf("Ничего не получится, размер стороны матрицы должен быть нечетным.\n");
    return 0;
  }
  int arr[N][N];
  int i = 0, j = 0;
  int toDo = 1; // 0 - увеличить j; 1 - увеличить i; 2 - уменьшить j; 3 - уменьшить i; 
  int haveToChange = 2;
  int inRow = N - 1;
  int hMTD = 0; //сколько элементов выставлено в линии
  for (int i1 = 1; i1 <= N * N; i1++){
    if (i1 <= N){
      arr[i][j] = i1;
      if (j != N - 1)
        j++;
      continue;
    }
    switch (toDo){
    case 0:
      j++;
      break;
    case 1:
      i++;
      break;
    case 2:
      j--;
      break;
    case 3:
      i--;
      break;
    }
    arr[i][j] = i1;
    hMTD++;
    if (hMTD == inRow){
      haveToChange--;
      toDo = (toDo + 1) % 4;
      hMTD = 0;
      if (haveToChange == 0){
	haveToChange = 2;
	inRow--;
      }
    }
  }
  printTable(N, arr);
  return 0;
}
