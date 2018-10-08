#include <stdio.h>

struct A{
  char a;
  int b;
};

struct B{
  char a;
  int b;
}__attribute__((packed));

int main(){
  char str[10] = {'A', 0, 0, 0, 0, 'B', 0, 0, 0, 0};
  struct A * a;
  struct B * b;
  a = str;
  b = str;
  printf("Sizeof(A) = %ld, sizeof(B) = %ld\n", sizeof(struct A), sizeof(struct B));
  printf("%c %c\n", a->a, (a + 1)->a);
  printf("%c %c\n", b->a, (b + 1)->a);
  return 0;
}
