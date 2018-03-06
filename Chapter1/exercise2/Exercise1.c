#include <stdio.h>

int main() {
  printf("Hello world!\caa\n");
  return 0;
}
// warning: unknown escape sequence: '\c'
// compiler adds char 'c' where '\c' is
