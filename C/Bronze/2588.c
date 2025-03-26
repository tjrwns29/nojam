// ★

#include <stdio.h>

int main() {
  int a;
  int b[3] = {
      0,
  };

  scanf("%d", &a);
  for (int i = 0; i < 3; i++) {
    scanf("%1d", &b[i]);
  }
  printf("%d\n", a * b[2]);  // 5
  printf("%d\n", a * b[1]);  // 8
  printf("%d\n", a * b[0]);  // 3

  int c = 100 * b[0] + 10 * b[1] + b[2];
  printf("%d", a * c);
}