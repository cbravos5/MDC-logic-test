#include <stdio.h>
#include <stdlib.h>

unsigned long isPrime(unsigned long number)
{
  if (number <= 1)
    return 0;

  if (number == 2)
    return 1;

  if (number % 2 == 0)
    return 0;

  for (unsigned long divisor = 3; divisor * divisor <= number; divisor += 2)
    if (number % divisor == 0) return 0;

  return 1;
}

int main()
{
  unsigned long num;
  
  printf("Enter a number: ");
  scanf("%lu", &num);

  if (isPrime(num))
    printf("%lu is a prime number.\n", num);
  else
    printf("%lu is not a prime number.\n", num);

  return 0;
}