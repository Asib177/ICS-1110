#include <stdio.h>

int main()
{
  int inputMoney, a = 500, b = 100, c = 1;

  scanf("%d", &inputMoney);

  int temp = 0;
  int x = inputMoney / a;
  temp = inputMoney % a;

  printf("%d - %dTk notes\n", x, a);
  //printf("Temp = %d\n", temp);

  int y = temp / b;
  temp = temp % b;

  printf("%d - %dTk notes\n", y, b);
  //printf("Temp = %d\n", temp);

  int z = temp / c;
  temp = temp % c;

  printf("%d - %dTk notes\n", z, c);
  //printf("Temp = %d\n", temp);

  return 0;
}
