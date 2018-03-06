#include <stdio.h>

int main() {
  int space, tab, newLine;
  space = tab = newLine = 0;  // Without this it's actually non-zero value

  int c;
  while((c = getchar()) != EOF) {
    if (c == ' ') space++;
    else if (c == '\t') tab++;
    else if (c == '\n') newLine++;
  }
  printf("Spaces: %d\nTabulators: %d\nNew Lines: %d\n", space, tab, newLine);
  return 0;
}
