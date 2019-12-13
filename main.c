#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
  int winCounter = 0;
  int counterfalse = 0;
  char tempNewWord[100];
  char guessedChar[0];
  int i;
  char words[100];
  printf("Gib ein Testwort ein: ");
  gets(words);
  //printf("%s", words);


while (counterfalse < 11)
{
  for (i = 0; words[i] != '\0'; i++ )
  {
    if (i == 0)
    {
      printf("%c", words[0]);
    }
    else
    {
      printf("_");

    }
  }
  printf(" (%d)", counterfalse);
  printf("\nYour guess: ");
  gets(guessedChar);
  if (guessedChar == ' ' || guessedChar != isalpha(guessedChar) || guessedChar < 1)
  {
    printf("invalid character");
  }
  //printf("%s", guessedChar);


    if(strcmp(words, guessedChar) == 0)
    {
  //Buchstabe in Wort einfügen
  //
    printf("ist enthalten");
  //gewinncounter++ wenn das Wort == der temp variable nword ist
  //neues "Wort" in temporären String speichern

    }
    else
    {
      printf("ist nicht enthalten\n");
      counterfalse++;
    }


}


printf("correct word was: %s (x_x) ", words);
printf("attempts: %d\n", counterfalse);
//printf("(%d%d)", winCounter);

  return 0;
}
