// Simple Calculator
// Create a calculator that takes two numbers and an operator (+, -, *, /) and returns the result
// of the operation.

#include <stdio.h>
#include <stdlib.h>

void getValues(int *number1, int *number2, char *op)
{
  printf("Type the first number: \n");
  scanf("%d", number1);

  printf("Type the second number: \n");
  scanf("%d", number2);

  // clear input buffer
  getchar();

  printf("Type the operation (+, -, *, /): \n");

  scanf("%c", op);
}

void printResult(float result)
{
  printf("The result is: %.3f\n", result);
}

float getResult(int number1, int number2, char op)
{
  float result;

  switch (op)
  {
  case '+':
    result = number1 + number2;
    break;
  case '-':
    result = number1 - number2;
    break;
  case '*':
    result = number1 * number2;
    break;
  case '/':
    result = number1 / (float)number2;
    break;
  default:
    printf("Invalid operation\n");
    exit(1);
  }

  return result;
}

int main()
{
  int number1, number2;
  char op;
  float result;

  getValues(&number1, &number2, &op);
  result = getResult(number1, number2, op);
  printResult(result);

  return 0;
}