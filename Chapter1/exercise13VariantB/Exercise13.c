#include <stdio.h>

#define IN 1
#define OUT 0
static const int MAXWORD = 100;

int setActualMaxWordLength(int t[]);
void removeEachOneStar(int t[]);

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

  /* Variables needed to create vertical histogram */
  int actualMaxWordLength;
  while((actualMaxWordLength = setActualMaxWordLength(wordLength)) != 0) {
    for(i = 0; i < actualMaxWordLength + 1; i++) {
      if(wordLength[i] != 0) {
        putchar('*');
      }
      else {
        putchar(' ');
      }
    }
    removeEachOneStar(wordLength);
    printf("\n");
  }
  return 0;
}

int setActualMaxWordLength(int t[]) {
  int i;
  for(i = MAXWORD + 1; i > 0; i--) {
    if(t[i] != 0) {
      return i;
    }
  }
  return 0;
}

void removeEachOneStar(int t[]) {
  int i;
  for(i = MAXWORD + 1; i > 0; i--) {
    if(t[i] > 0) {
      t[i]--;
    }
  }
}
