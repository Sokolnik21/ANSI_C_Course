#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
  printf("Tablica konwersji\n");
  int fahr;
  for(fahr = LOWER; fahr <= UPPER; fahr = fahr + 20)
    printf("%3d\t%5.1f\n", fahr, 5.0/9.0*(fahr - 32.0));
}
