#include <stdio.h>

void printTable(int number)
{
  for (int i = 1; i <= 10; i++)
    printf("%d x %d = %d\n", i, number, i * number);
}

int main()
{
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  printTable(number);

  return 0;
}