#include <stdio.h>

#define IN 1
#define OUT 0
static const int MAXWORD = 100;

void makeSomeStars(int amount);

int main() {
  /*
    That "+ 1" value is for easier storing values of the words length.
    Now each i-cell represents i-length word.
   */
  int wordLength[MAXWORD + 1];
  int i;
  for(i = 0; i < MAXWORD + 1; i++)
    wordLength[i] = 0;

  /* Variables */
  int charCounter = 0;
  int state = OUT;
  char c;

  while((c = getchar()) != EOF) {
    if(c == ' ' || c == '\n' || c == '\t') {
      if(state == IN) {
        wordLength[charCounter]++;
      }
      charCounter = 0;
      state = OUT;
    }
    else {
      state = IN;
      charCounter++;
    }
  }

  for(i = 0; i < MAXWORD + 1; i++) {
    if(wordLength[i] != 0) {
      printf("%3d-length words: %3d ",i ,wordLength[i]);
      makeSomeStars(wordLength[i]);
      printf("\n");
    }
  }
  return 0;
}

void makeSomeStars(int amount) {
  while(amount > 0) {
    putchar('*');
    amount--;
  }
}
