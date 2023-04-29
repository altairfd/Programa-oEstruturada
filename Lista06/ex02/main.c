#include <stdio.h>

int main() {
  int matriz[6][6] = {0};

  printf("Matriz antes da modificação:\n");
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < 6; i++) {
    matriz[i][i] = 1;
  }

  printf("Matriz depois da modificação:\n");
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}
