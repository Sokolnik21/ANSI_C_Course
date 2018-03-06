#include <stdio.h>

int main() {

  char c;
  while((c = getchar()) != EOF) {
    if (c == '\t') {
      putchar('\t');
      continue;
    }
    if (c == '\b') {
      putchar('\b');
      continue;
    }
    if (c == '\n') {
      putchar('\n');
      continue;
    }
    putchar(c);
  }
  return 0;
}
