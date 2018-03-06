#include <stdio.h>

int main() {
  int spaced = 0;

  int c;
  while((c = getchar()) != EOF) {
    if (c != ' ') spaced = 0;
    if (spaced == 1) continue;
    if (c == ' ') spaced = 1;
    putchar(c);
  }
  return 0;
}
