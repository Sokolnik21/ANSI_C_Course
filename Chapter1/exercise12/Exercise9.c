#include <stdio.h>

int main() {
  int inWord = 0;

  int c;
  while((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (inWord == 1) putchar('\n');
      inWord = 0;
      continue;
    }
    else {
      inWord = 1;
      putchar(c);
    }
  }
  return 0;
}
