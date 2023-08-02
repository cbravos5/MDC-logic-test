#include <stdio.h>
#include <string.h>

int isPalindrome(char* word) {

  int wordSize = strlen(word);

  for (int i = 0; i < wordSize; i++)
    if (word[i] != word[wordSize - i - 1]) return 0;

  return 1;  
}

int main()
{
  char word[100];

  printf("Enter a word: \n");
  scanf("%s",word);

   if (isPalindrome(word))
    printf("'%s' is a palindrome.\n", word);
  else
    printf("'%s' is not a palindrome.\n", word);

  return 0;
}