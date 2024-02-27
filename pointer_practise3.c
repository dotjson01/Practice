#include <stdio.h>

int function(int *);

int main() {
  int i = 35;
  int *j = &i;
  int **k = &j;

  int z = function(*k);

  printf("%d\n", &z);

  return 0;
}

int function(int *m) {
  return (*m + 2);
}
