#include <stdio.h>
#include <stdlib.h>

void getGrades(float *grade1, float *grade2, float *grade3)
{
  printf("Type your grade in Mathematics: \n");
  scanf("%f", grade1);

  printf("Type your grade in English: \n");
  scanf("%f", grade2);

  printf("Type your grade in Biology: \n");
  scanf("%f", grade3);
}

float getResult(float grade1, float grade2, float grade3)
{
  return (grade1 + grade2 + grade3) / 3;
}

int main()
{
  float grade1, grade2, grade3;
  float result;

  getGrades(&grade1, &grade2, &grade3);

  printf("Your grade average is %.3f\n", getResult(grade1,
                                                   grade2,
                                                   grade3));

  return 0;
}