#include <stdio.h>
#include <string.h>

int isVowel(char letter)
{
  if (letter == 'a' ||
      letter == 'e' ||
      letter == 'i' ||
      letter == 'o' ||
      letter == 'u')
    return 1;

  return 0;
}

int countVowels(char* string) {
  int stringSize = strlen(string);

  int vowelsCount = 0;

  for (int i = 0; i < stringSize; i++)
    if (isVowel(string[i])) vowelsCount += 1;

  return vowelsCount;
}

int main()
{
  char string[201];

  printf("Enter a string: \n");
  fgets(string, 200, stdin);

  // remove new line
  string[strlen(string) - 1] = '\0';

  printf("'%s' has %d vowels.\n", string, countVowels(string));

  return 0;
}