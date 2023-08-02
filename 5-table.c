// Table
// Create a program that receives a number from the user and displays the table of that
// number, from 1 to 10.

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