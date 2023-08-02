// Interest Calculation
// Create a function that calculates the final value of an investment based on initial capital,
// interest rate, and investment time (in months). The program must prompt the user for these
// values ​and display the final value.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void getValues(float *capital, float *rate, float *time)
{
  printf("Type the investment initial capital: \n");
  scanf("%f", capital);

  printf("Type the investment rate in percentage: \n");
  scanf("%f", rate);

  printf("Type the investment time in months : \n");
  scanf("%f", time);
}

float getSimpleInterest(float capital, float rate, float time)
{
  return capital + (capital * rate * time / 100);
}

float getCompoundInterest(float capital, float rate, float time)
{
  return capital * pow((1 + (rate / 100)), time);
}

int main()
{
  float capital, rate, time, simpleResult, compoundResult;

  getValues(&capital, &rate, &time);

  simpleResult = getSimpleInterest(capital, rate, time);
  compoundResult = getCompoundInterest(capital, rate, time);

  printf("Your final investment value using simple interest rate is %.3f\n", simpleResult);
  printf("Your final investment value using compound interest rate is %.3f\n", compoundResult);

  return 0;
}