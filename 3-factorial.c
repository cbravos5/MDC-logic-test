#include <stdio.h>
#include <stdlib.h>

unsigned long getFactorial(unsigned long number) {
  if (number == 0 || number == 1) return 1;
  
  unsigned long result = 2;

  for (unsigned long i = 3; i <= number; i++)
    result *= i;

  return result;  
}

int main()
{
  unsigned long number;
  
  printf("Enter a number: ");
  scanf("%lu", &number);

  printf("The factorial of %lu is %lu.\n", number, getFactorial(number));

  return 0;
}