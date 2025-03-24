#include <stdio.h>
int main()
{
  int first;
  int second[3] = {
      0,
  };
  scanf("%d", &first);
  for (int i = 0; i < 3; i++)
  { // 여기서 사용
    scanf("%1d", &second[i]);
  }
  printf("%d\n", first * second[2]);
  printf("%d\n", first * second[1]);
  printf("%d\n", first * second[0]);

  int second_2 = 100 * second[0] + 10 * second[1] + second[2];
  printf("%d", first * second_2);
  return 0;
}